/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==nullptr) return false;
        bool ans = isSameTree(root->left, subRoot) || isSameTree(root->right, subRoot) || isSameTree(root, subRoot);
        if(ans == true) 
        {
            return true;
        }

        if(isSubtree(root->right, subRoot)) return true;
        if(isSubtree(root->left, subRoot)) return true;

        return false;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( p==nullptr && q == nullptr) return true;
        if( p==nullptr || q == nullptr) return false;
        if( p->val == q->val)
        {
            return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
        }
        return false;
    }
};
