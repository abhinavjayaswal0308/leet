class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        
        for (int i = 0; i < s.size(); i++) {
            int n = s[i];
            int k= 122 - n + 1;       // 'a' → 26, 'z' → 1
            sum += k* (i + 1);        // multiply by 1-based index
        }
        return sum;   
    }
};
