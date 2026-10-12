class Solution {
public:
    string reverseOnlyLetters(string s) {

       
        int st=0;
        int end=s.size()-1;
       

        while(st<end){

            if(isalpha(s[st])&&isalpha(s[end])) {
                swap(s[st],s[end]);
                st++;
                end--;
            }
            else{
          

            if(!isalpha(s[st]))st++;
            if(!isalpha(s[end]))end--;
            }

           


            
        }

    return s;
        
    }
};