/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    
    // base condition
    if (A == NULL && B == NULL)
    {
        return 1;
    }

    // additional base condition
    if (A == NULL || B == NULL)
    {
        return 0;
    }

    // main logic

    // check node value
    if (A->val != B->val)
    {
        return 0;
    }

    // check LST and RST
    return isSameTree(A->left, B->left) && isSameTree(A->right, B->right);

}
