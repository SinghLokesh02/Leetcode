class Solution:
    def minTimeToType(self, word: str) -> int:
        ans = 0
        currentChar = 'a'
        for data in word:
            val = (ord(data) - ord(currentChar))%26
            ans += min(val,26 - val)
            currentChar = data
            ans += 1
            
        
        return ans