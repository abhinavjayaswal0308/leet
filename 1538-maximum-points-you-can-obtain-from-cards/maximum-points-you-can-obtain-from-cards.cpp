class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int totalpoint=0;
        for(int i=0;i<n;i++){
            totalpoint+=cardPoints[i];
        }
        int sum=0;
        for(int i=0;i<n-k;i++){
            sum+=cardPoints[i];
        }

        int i=0;
        int j=n-k-1;
        int maxi=totalpoint-sum;
        
        while(j+1<n){
            j++;
            sum+=cardPoints[j];
            sum-=cardPoints[i];
            i++;
            
            maxi=max(maxi,totalpoint-sum);
            
        }
    return maxi;





    }
};