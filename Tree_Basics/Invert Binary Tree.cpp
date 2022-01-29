/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::invertTree(TreeNode* A) {
    
    // base condition
    if (A == NULL)
    {
        return A;
    }

    // main logic
    TreeNode *right = invertTree(A->right);
    TreeNode *left = invertTree(A->left);

    // get the LST and RST and right it root in inverted manner here
    A->left = right;
    A->right = left;

    return A;
}