class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        for data in nums:
            if(nums.count(data)==1):
                return data
        
        
        