#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        string result;
        for (char a:s){
            if(isalnum(a)){
                result += tolower(a);
            }
            
        }
        string re = result;
        reverse(re.begin(),re.end());
        return re == result;

    }
};