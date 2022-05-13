class Solution {
public:
    bool dfs(int i, int j, vector<vector<char>>& board, string& word, int cur, vector<vector<bool>>& visited) {
        if(cur == word.length()) {
            return true;
        }
    if(i < 0 || j < 0 || i == board.size() || j == board[0].size() || word[cur] != board[i][j] || visited [i][j]) {
            return false;
        }
        visited[i][j] = true;
        cur++;
        if(dfs(i + 1, j, board, word, cur, visited) || 
           dfs(i - 1, j, board, word, cur, visited) || 
           dfs(i, j + 1, board, word, cur, visited) || 
           dfs(i, j - 1, board, word, cur, visited)) {
            return true;
        }
        visited[i][j] = false;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        vector<vector<bool>> visited(board.size(), vector<bool>(board[0].size(), false));
        for(int i = 0; i < board.size(); i++) {
            for(int j = 0; j < board[0].size(); j++) {
                if(dfs(i, j, board, word, 0, visited)) {
                    return true;
                }
            }
        }
        return false;
    }
};
