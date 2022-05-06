class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int res=0;
        for(int i=0; i<nums.size();i++){
             int sum=0;
            for(int j=i; j<nums.size();j++){
              
                sum= sum+nums[j];
                if(sum%k==0)
                    res++;
            }
        }
        return res;
    }
};
