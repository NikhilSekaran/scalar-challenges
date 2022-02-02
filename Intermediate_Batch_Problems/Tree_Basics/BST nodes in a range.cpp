/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int countNodes(TreeNode *root, int start, int end)
{
    // base condition
    if (root == NULL)
    {
        return 0;
    }

    // Current Node value < start <= end
    if (root->val < start)
    {
        return countNodes(root->right, start, end);
    }

    // Current Node value > end
    if (root->val > end)
    {
        return countNodes(root->left, start, end);
    }

    // start <= Current Node Value < end
    return 1 + countNodes(root->left, start, end) + countNodes(root->right, start, end);
}

int Solution::solve(TreeNode* A, int B, int C) {
    int count;

    // main logic
    count = countNodes(A, B, C);

    return count;
}
