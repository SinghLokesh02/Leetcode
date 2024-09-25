class Solution:
    def vowelStrings(self, words: List[str], left: int, right: int) -> int:
        count = 0
        vowel = "aeiou"
        for i in range(left,right+1):
            s = words[i]
            if((s[0] in vowel) and (s[len(s)-1] in vowel)):
                count+=1
                
        
        return count
        