class Solution:
    def printVertically(self, s: str) -> List[str]:
        words = s.split(" ");
        ans = []
        temp = ""
        charcount = 0
        maxi = -1
        
        
#       Finding Biggest word in the List
        for word in words:
            if(len(word)>maxi):
                maxi = len(word)
        while(maxi>0):    
            for word in words:
                if(len(word) > charcount):
                    temp += word[charcount]
                else:
                    temp += " ";
                    
            temp = temp.rstrip()
            ans.append(temp)
            temp = ""
            charcount += 1
            maxi -= 1
        return ans
                
        