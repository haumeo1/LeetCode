#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int left = 0;
        int right = height.size()-1;
        int result = 0;
        while(left<right){
            int heights = min(height[left],height[right]);
            int width = right-left;
            result = max(result,heights*width);
            if (height[left]<=height[right]){
                left+=1;
            }
            else{
                right-=1;
            }
        }
        return result;
    }
};