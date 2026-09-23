class Solution {
public:
    TreeNode* build(vector<int>& nums, int st, int end) {

        if (st > end)
            return NULL;

        int maxi = st;

        for (int i = st; i <= end; i++) {
            if (nums[i] > nums[maxi])
                maxi = i;
        }

        TreeNode* root = new TreeNode(nums[maxi]);

        root->left = build(nums, st, maxi - 1);

        root->right = build(nums, maxi + 1, end);

        return root;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums, 0, nums.size() - 1);
    }
};