class Solution:
    def isAcronym(self, words: List[str], s: str) -> bool:
        data = ""
        for word in words:
            data += word[0]
            
        return data==s
            