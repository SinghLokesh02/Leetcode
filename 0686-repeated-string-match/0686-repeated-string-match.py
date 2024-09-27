class Solution:
    def repeatedStringMatch(self, a: str, b: str) -> int:
        if(a == b):
            return 1
        if(b.count(a) < 0):
            return -1
        elif(a.count(b)>0):
            return 1
        s = a
        count = 1
        while(len(s) <= 10000):
            s += a
            count += 1
            if(s.count(b)>0):
                return count
        
        return -1
            
        
                
        