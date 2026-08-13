/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:

    bool isSame(TreeNode* p, TreeNode* q) {
      
      if(p==NULL || q==NULL) return p==q;

      bool isleftsame= isSame(p->left,q->left);
      bool isrightsame= isSame(p->right,q->right);

      return isleftsame && isrightsame && p->val==q->val;
     
    }



        bool isSubtree(TreeNode* root, TreeNode* subRoot) {

        if (subRoot == NULL)
            return true;

        if (root == NULL)
            return false;

        if (root->val == subRoot->val) {
            if (isSame(root, subRoot))
                return true;
        }

        bool checkleft = isSubtree(root->left, subRoot);
        bool checkright = isSubtree(root->right, subRoot);

        return checkleft || checkright;
    }
};