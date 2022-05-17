class Solution {
public:
    void solve(TreeNode* root,int targetSum,int &count,vector<int>ans){
        if(root==NULL)  return;
        ans.push_back(root->val);
        // call for left
        solve(root->left,targetSum,count,ans);
        // call for right
        solve(root->right,targetSum,count,ans);
        
        int sum=0;
        int size= ans.size()-1;
        
        for(int i=size;i>=0;i--){
            sum= sum+ans[i];
            if(sum==targetSum)
                count++;
        }
        ans.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        int count=0;
        solve(root,targetSum,count,ans);
        return count;
    }
};
