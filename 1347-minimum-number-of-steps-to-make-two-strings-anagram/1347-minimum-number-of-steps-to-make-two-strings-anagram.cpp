class Solution {
public:
    int minSteps(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int i = 0, j = 0, match = 0;

        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                match++;
                i++;
                j++;
            } 
            else if (s[i] < t[j])
                i++;
            else
                j++;
        }

        return s.size() - match;  
    }
};

