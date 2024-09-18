class Solution:
    def stringHash(self, s: str, k: int) -> str:
        alpha = 'abcdefghijklmnopqrstuvwxyz'
        num = 0;
        ans = ""
        hashed = 0
        toindex = k
        for i in range(0,len(s),k):
            
            newstr = s[num:toindex]
            num += len(newstr)
            toindex += k
            for data in newstr:
                hashed += alpha.index(data)
            
            ans += alpha[hashed%26]
            hashed = 0
        
        return ans
                
         
            
            
         
        