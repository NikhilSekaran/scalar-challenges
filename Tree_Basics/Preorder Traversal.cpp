/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> pre_order_op;
    stack <TreeNode *> nodes;
    TreeNode *curr_node = A;

    if (curr_node == NULL)
    {
        return pre_order_op;
    }

    while (!nodes.empty() || curr_node != NULL)
    {
        if (curr_node != NULL)
        {// if the current node is valid, push the data to output, then push the right node to stack and goto next left node
            pre_order_op.push_back(curr_node->val);

            nodes.push(curr_node);

            curr_node = curr_node->left;
        }
        else
        {// when is current node is empty fetch the top item from stack and process it
            
            curr_node = nodes.top();
            nodes.pop();

            curr_node = curr_node->right;
        }
    }

    return pre_order_op;

}
