class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>mpp;
        for(int i=0;i<nums.size();i++){

            mpp.insert(nums[i]);

            
        }
        int ans;
        for(int i=k;;i=i+k){
            if(mpp.find(i)==mpp.end()){
                ans=i;

                break;
            }
        }

    return ans;

    
    }
};