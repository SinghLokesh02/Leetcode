/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let a = []
    let ans = []
    nums.forEach((element)=>{
        if(a.includes(element)){
            ans.push(element)
        }
        else{
            a.push(element)
        }
    })
    return ans
};