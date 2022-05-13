class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        //interval graph
        int now=0;
        int range=0;
        for(int i=0; i<n && i<=range  ;i++){
            range= max(range , i+nums[i] );
            if(range >= n-1){
                return 1;
            }
        }
        return 0;
    }
};
