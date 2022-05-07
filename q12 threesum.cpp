class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;    
        
        set<vector<int>>s;
        int n= nums.size();
        for(int i=0;i<n-2;i++){
            int val= nums[i];
            int l= i+1;
            int r= n-1;
            while(l<r){
                int csum= val+nums[l]+nums[r];
                if(csum==0){
                    s.insert({val,nums[l++],nums[r--]});
                }
                else if(csum<0){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
