class Solution {
public:
    bool checkString(string s) {
        unordered_map<char,int>mpp;

        for(int i=0;i<s.size();i++){

            if(s[i]=='a'){
            if(mpp.find('b')!=mpp.end()){
                return false;

            }
            }
            mpp[s[i]]++;
        }

    return true;
        
    }
};