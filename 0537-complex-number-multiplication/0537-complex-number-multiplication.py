class Solution:
    def complexNumberMultiply(self, num1: str, num2: str) -> str:
        ind1 = num1.find("+")
        r1 = int(num1[0:ind1])
        img1 = int(num1[ind1+1:len(num1)-1])
        ind2 = num2.find("+")
        r2 = int(num2[0:ind2])
        img2 = int(num2[ind2+1:len(num2)-1])
    

        num1_complex = complex(r1, img1)
        num2_complex = complex(r2, img2)
    
        result_complex = num1_complex * num2_complex
        result_str = f"{int(result_complex.real)}+{int(result_complex.imag)}i"
    
        return result_str
