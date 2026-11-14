class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {

        int sum;
        int minimum = INT_MAX;
        int flag=0;

        for (int k = l; k <= r; k++) {

            sum = 0;

            int mini=INT_MAX;

            for (int i = 0; i < k; i++) {
                sum += nums[i];
            }
            if(sum>0) {
                mini = sum;
                flag=1;
            }

            int i = 0;
            int j = k - 1;

            while (j + 1 < nums.size()) {
                j++;

                sum += nums[j];
                sum -= nums[i];

                if(sum>0) {
                    flag=1;
                    mini = min(mini, sum);
                }

                i++;
            }
            

            minimum = min(minimum, mini);
        }

        if(flag==0) return -1;
        return minimum;
    }
};