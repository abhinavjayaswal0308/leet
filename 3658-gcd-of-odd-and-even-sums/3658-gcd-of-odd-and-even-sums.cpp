class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0 , sumeven=0;
       int num=n;
        int num1=n;

       for(int i=1;num!=0;i++){
         if(i%2==0) {
            sumeven+=i; 
            num--;

       }
       }

        for(int i=1;num1!=0;i++){
         if(i%2!=0) {
            sumodd+=i; 
            num1--;

       }
       }



      int a=sumeven;
      int b=sumodd;

      int mini=min(a,b);
       int ans;
      for(int i=mini;i>=1;i--){
        if(a%i==0 && b%i==0) {
        ans=i;
        break;
        }
      }

    return ans;

        
    }
};