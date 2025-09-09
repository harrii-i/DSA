//Minimum window substring
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minWindow(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        if (n2 > n1) return "";

        map<char,int> mpp;
        for (int x = 0; x < n2; x++) {
            mpp[t[x]]++;
        }

        int i = 0, j = 0;
        int required = n2;
        int start = 0, minlen = INT_MAX;

        while (j < n1) {
            if (mpp.find(s[j]) != mpp.end()) {
                if (mpp[s[j]] > 0) required--;
                mpp[s[j]]--;
            }

            while (required == 0) {
                if (j - i + 1 < minlen) {
                    minlen = j - i + 1;
                    start = i;
                }
                if (mpp.find(s[i]) != mpp.end()) {
                    mpp[s[i]]++;
                    if (mpp[s[i]] > 0) required++;
                }
                i++;
            }
            j++;
        }

        return (minlen == INT_MAX) ? "" : s.substr(start, minlen);
    }
};

int main() {
    Solution sol;
    string s = "ADOBECODEBANC";
    string t = "ABC";
    cout << sol.minWindow(s, t) << endl;  // Output: "BANC"
}
