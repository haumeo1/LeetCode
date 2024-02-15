class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        sum  = 0
        minL = float("inf")
        start = 0
        for i in range(len(nums)):
           sum+=nums[i]
           while(sum>=target):
               minL = min(minL,i-start+1)
               sum -=nums[start]
               start+=1
        return minL if minL != float('inf') else 0 