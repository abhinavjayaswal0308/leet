class Solution {
public:
    int trap(vector<int>& h) {
        int l=0;
        int r=h.size()-1;
        int ans=0;
        int lmax=0,rmax=0;



        while(l<r){
            if(h[l]<=h[r]){
                if(lmax>h[l]) ans+=lmax-h[l];
                else{
                    lmax=h[l];
                   
                }
                 l++;
            }
            else{
                if(rmax>h[r]) ans+=rmax-h[r];
                else{
                    rmax=h[r];
                   
                }
                 r--;
            }
        }
    return ans;
    }
};