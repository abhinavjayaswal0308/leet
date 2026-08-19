class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {

        if (root == NULL)
            return 0;

        queue<pair<TreeNode*, unsigned long long>> q;

        q.push({root, 0});

        int answer = 0;

        while (!q.empty()) {

            int size = q.size();

            unsigned long long first = q.front().second;
            unsigned long long last = 0;

            for (int i = 0; i < size; i++) {

                TreeNode* temp = q.front().first;
                unsigned long long pos = q.front().second;

                q.pop();

                last = pos;

                if (temp->left != NULL)
                    q.push({temp->left, 2 * pos + 1});

                if (temp->right != NULL)
                    q.push({temp->right, 2 * pos + 2});
            }

            answer = max(answer, (int)(last - first + 1));
        }

        return answer;
    }
};