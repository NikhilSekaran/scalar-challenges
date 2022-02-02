/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int isMirror(TreeNode *node1, TreeNode *node2)
{
    // base condition
    if (node1 == NULL && node2 == NULL)
    {
        return 1;
    }

    // additional base condition
    if (node1 == NULL || node2 == NULL)
    {
        return 0;
    }

    // main logic

    // check node value
    if (node1->val != node2->val)
    {
        return 0;
    }

    // check LST and RST
    return isMirror(node1->left, node2->right) && isMirror(node1->right, node2->left);
}


int Solution::isSymmetric(TreeNode* A) {
    if (A == NULL)
    {
        return 1;
    }
    
    return isMirror(A->left, A->right);
}
