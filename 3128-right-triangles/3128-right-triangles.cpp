class Solution {
public:
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        long long ans = 0;
        vector<int>row;
        vector<int>col;
        int n= grid.size();
        int m = grid[0].size();
//         For Rows
        for(int i = 0;i<n;i++){
            int count = 0;
            for(int j = 0;j<m;j++){
                if(grid[i][j] == 1)count++;
            }
            row.push_back(count);
        }
        //         For Columns
        for(int i = 0;i<m;i++){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(grid[j][i] == 1)count++;
            }
            col.push_back(count);
        }
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(grid[i][j]==1){
                long k = (row[i]-1)*(col[j]-1);
                if(k>0)ans += k;
                }
            }
        }
        return ans;
    }
};