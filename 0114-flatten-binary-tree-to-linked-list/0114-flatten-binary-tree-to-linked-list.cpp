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
    void flatten(TreeNode* root) {

        if(root == NULL) return;

        stack<TreeNode*> st;
        st.push(root);

        TreeNode* preorder_ll= NULL;

        while(!st.empty()) {

            

            root = st.top();
            st.pop();

            if(preorder_ll!= NULL) {
                preorder_ll->left = NULL;
                preorder_ll->right = root;
            }

            if(root->right != NULL)
                st.push(root->right);

            if(root->left != NULL)
                st.push(root->left);

            preorder_ll=root;

           
        }

        root=preorder_ll;
    }
};