#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while(n){
            count += 1&n;
            n>>=1;
        }
        return count;
    }
};