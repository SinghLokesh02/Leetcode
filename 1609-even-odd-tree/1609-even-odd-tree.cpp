/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    void TraversalLevelOrder(TreeNode* root,vector<vector<int>>&levelorderSum){
        if(!root)return;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty()){
            vector<int>level;
            int n = q.size();
            for(int i = 0;i<n;i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                level.push_back(temp->val);
            }
            levelorderSum.push_back(level);
        }
        
    }
    bool isEvenOddTree(TreeNode* root) {
        vector<vector<int>>levelorderSum;
        TraversalLevelOrder(root,levelorderSum);
        
        for (auto i = 0;i<levelorderSum.size();i++){
            int index = i%2;
            vector<int>level = levelorderSum[i];
            unordered_set<int>st(level.begin(),level.end());
            if(st.size() != level.size())return 0;
            if(index == 1)
                reverse(level.begin(),level.end());
            
            if(!is_sorted(level.begin(),level.end()))return 0;
            for(auto data : level){
                if(data%2 == index)return 0;
                cout<<data<<" ";
            }
        }
        cout<<endl;
        return 1;
        
    }
};