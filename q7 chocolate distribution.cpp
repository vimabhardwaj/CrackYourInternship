class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
    if(m==0 || n==0)
       return 0;
       
    sort(a.begin(),a.end());
    
    if(n<m) return -1;
    
    int mindif= INT_MAX;
    
    for(int i=0; i+m-1<n;i++){
        int diff= a[i+m-1]-a[i];
        if(diff<mindif){
            mindif= diff;
        }
    }
     return mindif;
    }   
};
