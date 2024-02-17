#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          if (strs.empty()) {
        return "";
    }

    int minLen = INT_MAX;
    for (const string& str : strs) {
        minLen = min(minLen, static_cast<int>(str.length()));
    }

    for (int i = 0; i < minLen; ++i) {
        char c = strs[0][i];
        for (int j = 1; j < strs.size(); ++j) {
            if (strs[j][i] != c) {
                return strs[0].substr(0, i);
            }
        }
    }

    return strs[0].substr(0, minLen);
            }
        };
    
