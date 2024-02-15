#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int sum =0;
        int start =0;
        int minL = INT_MAX;
        for (int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                minL = min(minL,i-start+1);
                sum-=nums[start];
                ++start;
            }
        }
        return minL != INT_MAX ? minL :0;
    }

    
};