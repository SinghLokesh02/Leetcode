class Solution {
public:
    void DoZero(vector<vector<int>>&m,int x, int y){
        int n = m[0].size();
        vector<int>v(n,0);
        for(int i = 0;i<m.size();i++){
            if(i == x){
                for(int j = 0;j<m[0].size();j++){
                    m[i][j] = 0;
                }
            }
        }
//     SETTING COLUMN 0
    for(int j = 0;j<m.size();j++){
         m[j][y] = 0;
      } 
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>m;
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0){
                  m.push_back(make_pair(i,j));
                }
            }
        }
        for(int i = 0;i<m.size();i++){
            DoZero(matrix,m[i].first,m[i].second);
        }
    }
};