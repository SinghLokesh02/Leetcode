class Solution:
    def isPrefixOfWord(self, sentence: str, searchWord: str) -> int:
        ans,count = -1,0
        arr = sentence.split(" ")
        for word in arr:
            count += 1
            if(word.find(searchWord) == 0):
                return count
        return ans