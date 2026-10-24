class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int count=0;

        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                count++;
        }
        int maxi=count;

        int i = 0;
        int j = k - 1;
        while (j+ 1 < s.size()) {

            j++;
            if (isVowel(s[j]))
                count++;
            if (isVowel(s[i]))
                count--;
            i++;

            maxi = max(maxi, count);
        }
        return maxi;
    }
};