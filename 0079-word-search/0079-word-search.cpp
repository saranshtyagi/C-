class Solution {
public:
    int rows, cols;
    bool find(vector<vector<char>>& board, int i, int j, string word, int idx) {
        if(idx == word.length()) {
            return true;
        }
        if(i < 0 || i >= rows || j < 0 || j >= cols || board[i][j] == '$') {
            return false;
        }
        if(word[idx] != board[i][j]) {
            return false; 
        }

        char temp = board[i][j]; 
        board[i][j] = '$'; 

        bool found = find(board, i + 1, j, word, idx + 1) | 
                     find(board, i - 1, j, word, idx + 1) | 
                     find(board, i, j + 1, word, idx + 1) | 
                     find(board, i, j - 1, word, idx + 1); 
        board[i][j] = temp; 
        return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        rows = board.size(); 
        cols = board[0].size(); 

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(board[i][j] == word[0] && find(board, i, j, word, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};