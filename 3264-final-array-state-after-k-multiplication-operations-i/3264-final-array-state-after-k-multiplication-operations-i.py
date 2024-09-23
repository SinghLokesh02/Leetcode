class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        
        while(k > 0):
            x = min(nums)
            index = nums.index(x)
            x *= multiplier
            nums[index] = x           
            k-=1
        
        return nums
        