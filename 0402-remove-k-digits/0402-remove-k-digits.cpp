class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string ans="";

       
       for(char c : num){
        while(k>0 && !st.empty() && st.top()>c){
            st.pop();
            k--;
        }
        st.push(c);
        }

        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }

        while(!st.empty()){
          ans+=st.top();
          st.pop();      
        }

        reverse(ans.begin(),ans.end());

        int i=0;
        while(ans[i]=='0'){
            ans.erase(i,1);
            
        }

    if(ans.size()==0){
        return "0";
    }



    
    return ans;


        
    }
};