/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> order_res, post_order_op;
    stack <TreeNode *> nodes;
    TreeNode *curr_node = A;

    if (curr_node == NULL)
    {
        return order_res;
    }

    while (!nodes.empty() || curr_node != NULL)
    {
        if (curr_node != NULL)
        {// if the current node is valid, push the data to output, then push the right node to stack and goto next left node
            order_res.push_back(curr_node->val);

            nodes.push(curr_node);

            curr_node = curr_node->right;
        }
        else
        {// when is current node is empty fetch the top item from stack and process it
            
            curr_node = nodes.top();
            nodes.pop();

            curr_node = curr_node->left;
        }
    }

    for (auto it = order_res.rbegin(); it != order_res.rend(); it++)
    {
        post_order_op.push_back(*it);
    }
    
    return post_order_op;
}
