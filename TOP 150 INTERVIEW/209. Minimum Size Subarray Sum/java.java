class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int sum =0;
        int start =0;
        int minL = Integer.MAX_VALUE;
        for (int i=0;i<nums.length;i++){
            sum+=nums[i];
            while(sum>=target){
                minL = Math.min(minL,i-start+1);
                sum-=nums[start];
                ++start;
            }
        }
        return minL != Integer.MAX_VALUE ? minL :0;
    }
    }
