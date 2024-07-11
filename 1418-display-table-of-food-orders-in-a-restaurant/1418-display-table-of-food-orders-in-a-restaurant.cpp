class Solution {
public:
     void Solve(vector<string>&Table,vector<string>dish,vector<string>mapVector){
          
         for(int i = 1;i<dish.size();i++){
           int cnt = count(mapVector.begin(),mapVector.end(),dish[i]);
             Table.push_back(to_string(cnt));
         }
         
     }
 
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {   
        vector<vector<string>>ans;
//         Arraging Key Value pair of Table Number - Dishes
        map<int,vector<string>>m;
        for(int i = 0;i<orders.size();i++){
            int tablenumber = stoi(orders[i][1]);
            string dishes = orders[i][2];
            if(m.find(tablenumber) != m.end()){
                m[tablenumber].push_back(dishes);
            }
            else{
                m[tablenumber] = {dishes};
            }
        }
 
        vector<string>dishes;
        for(int i = 0;i<orders.size();i++){
            dishes.push_back(orders[i][2]);
        }
        
//         Arranging Table
        
        sort(dishes.begin(),dishes.end());
        dishes.erase(unique(dishes.begin(),dishes.end()),dishes.end());
        sort(dishes.begin(),dishes.end());
        dishes.insert(dishes.begin(),"Table");
        
//         Generating Number One by One
        ans.push_back(dishes);
        for(auto i : m){
            int x = i.first;
              vector<string>tempo;
              tempo.push_back(to_string(x));
              Solve(tempo,dishes,i.second);
             ans.push_back(tempo);
        }
                
        return ans;
    }
};