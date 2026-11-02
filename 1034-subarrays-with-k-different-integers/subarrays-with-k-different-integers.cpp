class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int l=0,r=0,count1=0,count2=0;;
        unordered_map<int,int>mpp;

        while(r<nums.size()){
            mpp[nums[r]]++;
        
        while(mpp.size()>k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0)
                mpp.erase(nums[l]);

            l++;
               
            
        }
        count1+=r-l+1;
        r++;
        }

         l=0,r=0;
        unordered_map<int,int>mpp2;

        while(r<nums.size()){
            mpp2[nums[r]]++;
        
        while(mpp2.size()>k-1){
            mpp2[nums[l]]--;
            if(mpp2[nums[l]]==0)
                mpp2.erase(nums[l]);

            l++;
               
            
        }
        count2+=r-l+1;
        r++;
        }

    return count1-count2;


    }
};