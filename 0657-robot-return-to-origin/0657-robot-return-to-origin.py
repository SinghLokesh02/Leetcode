class Solution:
    def judgeCircle(self, moves: str) -> bool:
        l = moves.count("L")
        r = moves.count("R")
        u = moves.count("U")
        d = moves.count("D")
        
        return (l == r and u == d)
        