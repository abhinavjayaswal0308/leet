class Solution {
public:
    int smallestNumber(int n, int t) {
        int num;
        int prod=1;
        int d;


        int ans =n;


        while(true){
            num=ans;
            prod=1;

            while(num!=0){
                d=num%10;
                prod*=d;
                num=num/10;

            }
            if(prod%t==0) break;

            ans++;
            
        }

        return ans;
        
    }
};