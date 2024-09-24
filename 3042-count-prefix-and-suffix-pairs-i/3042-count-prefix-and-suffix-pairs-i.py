class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        count = 0
        for data1 in range(0,len(words)):
            for data2 in range(data1+1,len(words)):
                if(words[data2].startswith(words[data1]) and words[data2].endswith(words[data1])):
                    count += 1
            
        
        return count
        