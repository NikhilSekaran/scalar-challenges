/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> in_order_op;
    stack <TreeNode *> nodes;
    TreeNode *curr_node = A;

    if (curr_node == NULL)
    {
        return in_order_op;
    }

    // iterate all the nodes in-order traversal
    while (curr_node != NULL || nodes.empty() == false)
    {
        // reach the left most node of current node
        while (curr_node != NULL)
        {
            nodes.push(curr_node);

            curr_node = curr_node->left;
        }

        // fetch the top most node from stack which has the left most node
        curr_node = nodes.top();
        
        // push the data
        in_order_op.push_back(curr_node->val);

        // pop the top node whose value is inserted in the vector
        nodes.pop();

        // left and root are pushed into stack or printed, so move to right sub tree
        curr_node = curr_node->right;
    }

    return in_order_op;
}
