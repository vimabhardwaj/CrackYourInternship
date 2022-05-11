class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int count =0;
        unordered_map<int,int>prefix;
        int cumsum=0;
        for(int i=0;i<n;i++){
            cumsum+=nums[i];
            if(cumsum==k)
                count++;
            
            
            if(prefix.find(cumsum-k)!=prefix.end()){
                count+= prefix[cumsum-k];
            }
            prefix[cumsum]++;
        }
        return count;
    }
};
