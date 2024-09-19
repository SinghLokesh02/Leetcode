class Solution {
public:
    int returnOnesIndex(int index, string boxes){
        vector<int>v;
        for(int i = 0;i<boxes.size();i++){
            if(boxes[i] == '1' && i != index)v.push_back(abs(i - index));
        }
        return accumulate(v.begin(),v.end(),0);
    }
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        
        for(int i = 0;i<boxes.size();i++){
            int count = 0;
            count += returnOnesIndex(i,boxes);
            ans.push_back(count);
        }
        
        
        return ans; 
    }
};