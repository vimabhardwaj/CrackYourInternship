class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        int count=0;
        int cumsum=0;
        mpp[0]++;
        for(int i=0;i<nums.size();i++){
            cumsum+=nums[i];
            int rem = cumsum%k;
            if(rem<0){
                rem+=k;
            }
            if(mpp.count(rem)>0){
                count+=mpp[rem];
            }
            mpp[rem]++;
        }
        return count;
    }
};
