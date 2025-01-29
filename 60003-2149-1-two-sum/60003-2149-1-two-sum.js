/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */

var twoSum = function(nums, target) {
     const Obj = {};
     for(let i = 0;i<nums.length;i++){
        if((target - nums[i]) in Obj){
            return [i, Obj[target - nums[i]]];
        }
        else{
            Obj[nums[i]] = i;
        }
     }
     return []
};