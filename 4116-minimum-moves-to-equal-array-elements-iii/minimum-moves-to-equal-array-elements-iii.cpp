class Solution {
public:
    int minMoves(vector<int>& nums) {
        auto a=max_element(nums.begin(),nums.end());
        int sum=0;



      for(auto i : nums){
        sum+=(*a-i);

      }

    return sum;
        
    }
};