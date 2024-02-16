#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int result = 0;
        unordered_map<char, int> seen;
        for(int i =0;i<s.length();i++){
            char c = s[i];
            if (seen.find(c) != seen.end() && seen[c] >= start){
                start = seen[c] +1;
            }
            result = max(result,i-start+1);
            seen[c] = i;
        }
        return result;
    }
};