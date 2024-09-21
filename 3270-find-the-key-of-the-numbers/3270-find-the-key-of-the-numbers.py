class Solution:
    def generateKey(self, num1: int, num2: int, num3: int) -> int:
        num1 = str(num1)
        num2 = str(num2)
        num3 = str(num3)
        
        while(len(num1)!= 4):
            num1 = ("0" + num1)
        while(len(num2)!= 4):
            num2 = ("0" + num2)
        while(len(num3)!= 4):
            num3 = ("0" + num3)
        
        ans = ""
        for i in range(len(num1)):
            ans += min(num1[i],num2[i],num3[i])
        
      
        return int(ans)
            
         
        