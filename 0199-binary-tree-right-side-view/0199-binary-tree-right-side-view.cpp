
class Solution {
  public:
    vector<int> rightSideView(TreeNode *root) {
        queue<TreeNode*>q;
        vector<int>ans;
        
        if(root==NULL) return ans;
        
        int size;
        
        q.push(root);
        
        while(!q.empty()){
             size=q.size();
             
             for(int i=0;i<size;i++){
                 TreeNode*temp=q.front();
                 if(i==size-1){
                     ans.push_back(q.front()->val);
                 }
                 
                
                 q.pop();
                 
                 if(temp->left!=NULL) q.push(temp->left);
                 if(temp->right!=NULL) q.push(temp->right);
                 
             }
        }
        
    return ans;
        
    }
};