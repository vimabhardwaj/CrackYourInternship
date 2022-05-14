class Solution {
public:
    int findmin(string arr[], int n){
        int min= arr[0].length();
        for(int i=0;i<n;i++){
            if(arr[i]<min)
                min= arr[i].length();
             
        }
        return(min);
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        int minlen = findMinLength(strs, n);
 
    string result; 
    char current;  
 
    for (int i=0; i<minlen; i++)
    {
      
        current = strs[0][i];
 
        for (int j=1 ; j<n; j++)
            if (strs[j][i] != current)
                return result;
 
        // Append to result
        result.push_back(current);
    }
 
    return (result);
    }
};
