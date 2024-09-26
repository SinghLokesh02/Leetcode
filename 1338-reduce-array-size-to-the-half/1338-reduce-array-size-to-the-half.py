class Solution:
    def minSetSize(self, arr: List[int]) -> int:
        st = set(arr)
        if(len(st) == len(arr)):
            return len(arr)//2
        
        size = len(arr)//2
        mydict = {}
        for data in st:
            mydict[data] = arr.count(data)
        
        ans = 0
        values = list(mydict.values())
        values.sort(reverse = True)
        print(values)
        i = 0
        while(ans <= size):
            ans += values[i]
            i += 1
            if(ans >= size):
                break
        
        print(i)
        return i
        
            
            
        