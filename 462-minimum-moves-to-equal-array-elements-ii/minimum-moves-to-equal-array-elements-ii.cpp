class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid;

        int n=nums.size();
        mid=nums[n/2];
        int sum=0;

        

        for(int i=0;i<n;i++){
           
            sum+=abs(mid-nums[i]);
            

        }
    return sum;
    }
};