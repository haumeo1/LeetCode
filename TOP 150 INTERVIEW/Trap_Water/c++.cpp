#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        if (height.size() < 3) {
            return 0;
        }

        int left = 0, right = height.size() - 1;
        int left_max = height[left], right_max = height[right];
        int trapped_water = 0;

        while (left < right) {
            left_max = max(left_max, height[left]);
            right_max = max(right_max, height[right]);

            if (left_max <= right_max) {
                trapped_water += left_max - height[left];
                left++;
            } else {
                trapped_water += right_max - height[right];
                right--;
            }
        }

        return trapped_water;
    }
};

