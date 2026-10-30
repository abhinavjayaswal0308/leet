class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {

        unordered_set<int>st1;

        int left=0;
        int count=0;

        for(int i=0;i<nums.size();i++){
            st1.insert(nums[i]);
        }
        int k=st1.size();
        unordered_map<int,int>mpp;


        for(int right=0;right<nums.size();right++){
            mpp[nums[right]]++;

            while(mpp.size()==k){
                count+=nums.size()-right;
                mpp[nums[left]]--;
            
            
            if(mpp[nums[left]]==0) mpp.erase(nums[left]);
            left++;
        }
        }

    return count;
    }
};