class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        duplicate = set()
        ans = 0
        for data in nums:
            if(nums.count(data)>1):
                duplicate.add(data)
        
        if(len(duplicate) == 0):
            return 0
        else:
            for data in duplicate:
                ans ^= data
            
            return ans
        