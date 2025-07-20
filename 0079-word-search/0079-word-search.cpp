class Solution {
private:
    bool found(vector<vector<char>>& board, int i, int j, string& word, int idx) {
        if(idx == word.length()) {
            return true;
        }
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] == '$') {
            return false;
        }
        if(board[i][j] != word[idx]) {
            return false;
        }
        char temp = board[i][j]; 
        board[i][j] = '$'; 
        bool find = found(board, i - 1, j, word, idx + 1) ||
                     found(board, i + 1, j, word, idx + 1) ||
                     found(board, i, j - 1, word, idx + 1) ||
                     found(board, i, j + 1, word, idx + 1); 
        board[i][j] = temp;
        return find;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int row = board.size(); 
        int col = board[0].size(); 

        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if((board[i][j] == word[0]) && (found(board, i, j, word, 0))) {
                    return true;
                } 
            }
        }
        return false;
    }
};