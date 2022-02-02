/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int height(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int left_st_height = height(root->left);
    int right_st_right = height(root->right);

    int final_height = max(left_st_height, right_st_right) + 1;

    return final_height;
}

int Solution::solve(TreeNode* A) {

    return height(A);
}
