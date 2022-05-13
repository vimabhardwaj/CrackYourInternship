class Solution {
public:
    bool isvalid(int x, int y, vector<vector<int>>&board){
        return(x>=0 && x<board.size() && y>=0 && y<board[0].size());
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<int>dx= {0,0,1,1,1,-1,-1,-1};
        vector<int>dy= {1,-1,1,-1,0,0,1,-1};
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size();col++){
                int count=0;
                for(int i=0;i<8;i++){
                    int curr_x= row+dx[i];
                    int curr_y= col+dy[i];
                    if(isvalid(curr_x,curr_y,board) &&abs(board[curr_x][curr_y])==1)
                        count++;
                }
                if(board[row][col]==1 && (count<2||count>3))
                    board[row][col]=-1;
                if(board[row][col]==0 && count==3)
                    board[row][col]=2;
            }
        }
        for(int row=0;row<board.size();row++){
            for(int col=0;col<board[0].size();col++){
                if(board[row][col]>=1)
                    board[row][col]=1;
                else
                    board[row][col]=0;
            }
        }
    }
};
