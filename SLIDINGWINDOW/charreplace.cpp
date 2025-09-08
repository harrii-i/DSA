//longest repeating character replacement
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int maxlen = 0;
        int mfreq = 0;
        int hash[26] = {0};

        while (j < n) {
            hash[s[j] - 'A']++;
            mfreq = max(mfreq, hash[s[j] - 'A']);

            while ((j - i + 1) - mfreq > k) {
                hash[s[i] - 'A']--;
                mfreq = 0;
                for (int x = 0; x < 26; x++) {
                    mfreq = max(mfreq, hash[x]);
                }
                i++;
            }

            if ((j - i + 1) - mfreq <= k) {
                maxlen = max(maxlen, j - i + 1);
            }
            j++;
        }
        return maxlen;
    }
};
