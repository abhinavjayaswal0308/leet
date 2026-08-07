// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans;

        int st=1,end=n;
       while(st<end){
        int  mid=st+(end-st)/2;

        if(bool(isBadVersion(mid))){
            end=mid;

        }
        else{
            st=mid+1;

        }

    
       }
        
    return st;
    }
};