/**
 * Definition for a binary tree node.
 * struct TreeNode 
 {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
    bool findSymmetry(TreeNode* left, TreeNode* right)
    {
        if (left == NULL || right == NULL)
        {
            return left == right;
        }

        if (left -> val != right -> val)
        {
            return false;
        }

        return findSymmetry(left -> left, right -> right) && findSymmetry(left -> right, right -> left);
    }

    public:
        bool isSymmetric(TreeNode* root) 
        {
            if (root == NULL)
            {
                return true;
            }

            return findSymmetry(root -> left, root -> right);
        }
};
