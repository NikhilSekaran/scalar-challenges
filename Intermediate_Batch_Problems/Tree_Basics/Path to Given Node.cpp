/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

bool foundValue(TreeNode *root, int value, vector<int> &pathValues)
{
    // base condition
    if (root == NULL)
    {
        return false;
    }

    // matches the node value, then add it in vector and return true
    if (root->val == value)
    {
        pathValues.push_back(root->val);
        return true;
    }

    // if it is not in current node, then search in left and if found then add it in vector and return true
    if ( foundValue(root->left, value, pathValues) )
    {       
        pathValues.push_back(root->val);
        return true;
    }
    
    // if it is not in current node and left, then search in right and if found then add it in vector and return true
    if ( foundValue(root->right, value, pathValues) )
    {
        pathValues.push_back(root->val);
        return true;
    }

    return false;
}

vector<int> Solution::solve(TreeNode* A, int B) {
    vector<int> op;

    if (A == NULL)
    {
        return op;
    }

    foundValue(A, B, op);

    // the path is in reverse order, hence reverse to get it from root to node
    reverse(op.begin(), op.end());

    return op;
}
