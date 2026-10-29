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
    vector<int> ans;
    void f(TreeNode* node) {
        if (node == NULL)
            return;

        f(node->left);
        ans.push_back(node->val);
        f(node->right);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {

        f(root1);
        f(root2);

        sort(ans.begin(), ans.end());

        return ans;
    }
};