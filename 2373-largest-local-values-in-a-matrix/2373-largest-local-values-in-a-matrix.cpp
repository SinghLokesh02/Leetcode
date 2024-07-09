class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        int n = grid.size();
        
        for(int i = 0;i<n-2;i++){
             vector<int>temp;
            for(int j = 0;j<n-2;j++){
                int maxi = -1;
                for(int x = i;x<i+3;x++){
                    for(int y = j;y<j+3;y++){
                        if(maxi< grid[x][y])maxi = grid[x][y];
                    }
                }
                temp.push_back(maxi);
            }
            ans.push_back(temp);
        }
        
        
        return ans;
    }
};