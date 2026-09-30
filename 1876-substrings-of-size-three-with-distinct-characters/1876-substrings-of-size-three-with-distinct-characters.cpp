class Solution {
public:
    bool f(string s){

        unordered_set<char>set;
        for(int i=0;i<s.size();i++){
            set.insert(s[i]);
        }
        return set.size()==s.size();

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