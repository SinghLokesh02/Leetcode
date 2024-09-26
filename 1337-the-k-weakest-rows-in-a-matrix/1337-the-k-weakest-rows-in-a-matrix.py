class Solution:
    def kWeakestRows(self, mat: List[List[int]], k: int) -> List[int]:
        countSoldier = []
        for data in mat:
            soldier = data.count(1)
            countSoldier.append(soldier)
        
        mydict = {}
        for i in range(0,len(countSoldier)):
            mydict[i] = countSoldier[i]
        print(mydict)
        sorted_by_values = dict(sorted(mydict.items(), key=operator.itemgetter(1)))
        dataWeak = list(sorted_by_values.keys())[0:k]
        
        return dataWeak
 
        
        