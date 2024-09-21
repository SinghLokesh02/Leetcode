class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        dict = {}
        for data in nums:
            if(data not in dict):
                dict[data] = 1
            else:
                dict[data] += 1
        
        print(dict)
        for key in dict:
            if(dict[key] > len(nums)//2):
                return key