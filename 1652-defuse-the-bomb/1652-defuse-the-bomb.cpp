class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {

        vector<int>answer(code.size());

        if(k==0) return answer;



        int sum=0;
        int n=code.size();

        if(k>0){
            for(int i=0;i<n;i++){
                int sum=0;
                
                int x=1;
                while(x<=k){
                    
                    sum+=code[(i+x)%n];
                    x++;
                }
                answer[i]=sum;
            }
        }
        else if(k<0){
            for(int i=0;i<n;i++){
                int sum=0;
                
                int x=1;
                while(x<=abs(k)){
                    
                    sum+=code[(i-x+n)%n];
                    x++;
                }
                answer[i]=sum;
            }


        }

    return answer;

        
    }
};