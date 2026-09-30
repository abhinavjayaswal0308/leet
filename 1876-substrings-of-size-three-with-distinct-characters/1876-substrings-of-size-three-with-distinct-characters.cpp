class Solution {
public:
    bool f(string s){

        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        return mpp.size()==s.size();

    }
    int countGoodSubstrings(string s) {
        int count=0;
        if(s.size()<3) return 0;
        

        for(int i=0;i<=s.size()-3;i++){

            if(f(s.substr(i,3))) count++;



        }

    return count;
        
        
    }
};