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
    TreeNode* reverseOddLevels(TreeNode* root) {
        // Step 1: BFS to collect node pointers level by level
        vector<vector<TreeNode*>> levels;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            int levelSize = q.size();
            vector<TreeNode*> currentLevel;
            
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                currentLevel.push_back(node);
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            levels.push_back(currentLevel);
        }
        
        // Step 2: For every odd level, swap values from outside in
        for (int i = 1; i < levels.size(); i += 2) {
            int left = 0, right = levels[i].size() - 1;
            while (left < right) {
                swap(levels[i][left]->val, levels[i][right]->val);
                left++;
                right--;
            }
        }
        
        return root;
    }
};