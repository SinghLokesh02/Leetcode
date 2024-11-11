class Solution:
    def luckyNumbers(self, matrix: List[List[int]]) -> List[int]:
        mini = []
        maxi = []
#         ROw Minimum
        for data in matrix:
            mini.append(min(data))
        
#         Column Maximum
        for col in range(len(matrix[0])):  # loop through columns
            maxData = -1000000
            for row in range(len(matrix)):  # loop through rows in each column
                if(maxData < matrix[row][col]):
                    maxData = matrix[row][col]
                
            maxi.append(maxData)
        
        return list(set(maxi).intersection(set(mini)))
 
        