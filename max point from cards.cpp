class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int tempsum=0;
        int maxsum=0;
        for(int i=0;i<k;i++){
            tempsum= tempsum+cardPoints[i];
        }
        maxsum= tempsum;
        if(k==cardPoints.size()){
            return maxsum;
         }
        int right= cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            tempsum= tempsum- cardPoints[i]+cardPoints[right];
            if(tempsum>maxsum)
               maxsum= tempsum;
            right--;
        }
        return maxsum;
    }
};
