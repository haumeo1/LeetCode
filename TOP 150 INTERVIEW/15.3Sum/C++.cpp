#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // ios_base::sync_with_stdio(false);
        // cin.tie(nullptr);
        // cout.tie(nullptr);
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector <int> > result;
        for (int i=0;i<n-2;i++){
            if (i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int left = i+1;
            int right = n-1;
            while(left<right){
                int total = nums[left] + nums[right] +nums[i];
                if (total == 0){
                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left]==nums[left+1]){
                        ++left;
                    }
                     while(left<right && nums[right]==nums[right-1]){
                        --right;
                    }
                    ++left;
                    --right;

                }
                else if(total<0){
                    ++left;
                }
                else{
                    --right;
                }
            }

        }
        return result;
    }
};