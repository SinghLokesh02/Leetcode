class Solution {
public:
     
    bool canMakeSquare(vector<vector<char>>& grid) {
        int n = grid.size();
//         BRUTE FORCE USING STRINGS
//         int ans = false;
//         string s1(grid[0].begin(),grid[0].end());
//         string s2(grid[1].begin(),grid[1].end());
//         string s3(grid[2].begin(),grid[2].end());
//         int countb1 =0,countb2 = 0,countb3 = 0,countb4 = 0;
//         int countw1 =0,countw2 = 0,countw3 = 0,countw4 = 0;
//         for(int i = 0;i<2;i++){
//             if(s1[i] == 'B')countb1++;
//             if(s2[i] == 'B')countb1++;
//             if(s1[i] == 'W')countw1++;
//             if(s2[i] == 'W')countw1++;
//         }
//         for(int i = 0;i<2;i++){
//             if(s2[i] == 'B')countb2++;
//             if(s3[i] == 'B')countb2++;
//             if(s2[i] == 'W')countw2++;
//             if(s3[i] == 'W')countw2++;
//         }
//         for(int i = 1;i<3;i++){
//             if(s1[i] == 'B')countb3++;
//             if(s2[i] == 'B')countb3++;
//             if(s1[i] == 'W')countw3++;
//             if(s2[i] == 'W')countw3++;
//         }
//         for(int i = 1;i<3;i++){
//             if(s2[i] == 'B')countb4++;
//             if(s3[i] == 'B')countb4++;
//             if(s2[i] == 'W')countw4++;
//             if(s3[i] == 'W')countw4++;
//         }
        
//         if(countb1 == 1 || countb2 == 1 || countb3 == 1 || countb4 == 1 || countw1 == 1 || countw2 == 1 || countw3 == 1 || countw4 == 1){
//             ans = true;
//         }
//         if(countb1 == 4 || countb2 == 4 || countb3 == 4 || countb4 == 4 || countw1 == 4 || countw2 == 4 || countw3 == 4 || countw4 == 4){
//             ans = true;
//         }
        
        
//         return ans;
        
        
//         MATRIX TRAVERSAL
           for(int i = 0;i<2;i++){
               for(int j = 0;j<2;j++){
                   int score = 0;
                   if(grid[i][j] == grid[i][j+1])score++;
                   if(grid[i][j] == grid[i+1][j])score++;
                   if(grid[i][j] == grid[i+1][j+1])score++;
                   if(score != 1)return 1;
               }
           }
        return 0;
    }
};