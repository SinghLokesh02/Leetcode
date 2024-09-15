class Solution:
    
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        def CountFrequency(num):
            return nums.count(num)>=2
        ans = list(set(filter(CountFrequency,nums)))
        return ans
        
        