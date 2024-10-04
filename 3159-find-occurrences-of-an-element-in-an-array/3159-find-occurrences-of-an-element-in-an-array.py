class Solution:
    def occurrencesOfElement(self, nums: List[int], queries: List[int], x: int) -> List[int]:
        queriesOfx =  []
        for i in range(len(nums)):
            if(nums[i] == x):
                queriesOfx.append(i)
                
        ans = []
        numberOfTimes = len(queriesOfx)
        for data in queries:
            if(numberOfTimes >= data):
                ans.append(queriesOfx[data-1])
            else:
                ans.append(-1)
            
        return ans
            
        