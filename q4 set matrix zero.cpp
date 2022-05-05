class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n= matrix.size();
        int m= matrix[0].size();
        bool row= true; 
        bool col= true;
        
        for(int i=0;i<n;i++) if(matrix[i][0]==0) row= false;
        for(int j=0;j<m;j++) if(matrix[0][j]==0) col=false;
        
        for(int i=1;i<n;i++){
            for(int j=1; j<m; j++){
                if (matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
                for(int i=1;i<n;i++){
                    if (matrix[i][0]==0){
                        for(int j=0;j<m;j++){
                            matrix[i][j]=0;
                        }
                    }
                }
                for(int j=1;j<m; j++){
                    if(matrix[0][j]==0){
                        for(int i=0; i<n; i++){
                            matrix[i][j]=0;
                        }
                    }
                }
                if(!row){
                    for(int i=0; i<n;i++){
                        matrix[i][0]=0;
                    }
                }
                if(!col){
                    for(int j=0; j<m; j++){
                        matrix[0][j]=0;
                    }
                }
    }
};
