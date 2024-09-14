class Solution:
    def convertDateToBinary(self, date: str) -> str:
        ans = date.split("-")
        return_ans = []
        for data in ans:
            data = bin(int(data))
            return_ans.append(str(data[2:]))
        return ("-").join(return_ans)
        