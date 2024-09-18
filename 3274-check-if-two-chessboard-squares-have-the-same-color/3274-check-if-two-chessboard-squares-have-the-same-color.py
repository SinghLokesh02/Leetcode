class Solution:
    def checkTwoChessboards(self, coordinate1: str, coordinate2: str) -> bool:
        str = 'abcdefgh'
        x1 = str.index(coordinate1[0])
        x1 += int(coordinate1[1])
        
        x2 = str.index(coordinate2[0])
        x2 += int(coordinate2[1])
        
        return (x1%2 == x2%2)