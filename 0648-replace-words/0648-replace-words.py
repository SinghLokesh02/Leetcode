class Solution:
    def ReturnRoot(self,dictionary,s):
        ans = ""
        for root in dictionary:
            if(s.find(root)==0):
                if(ans != "" and len(root) < len(ans)):
                    ans = root
                elif(ans == ""):
                    ans = root
        return ans
        
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        arr = sentence.split(" ")
        ans = []
        for data in arr:
            st = self.ReturnRoot(dictionary,data)
            if(st != ""):
                ans.append(st)
            else:
                ans.append(data)
            

        ans = " ".join(ans)
                    
        return ans