class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_set<char> row;
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(row.count(board[i][j])){
                    return false;
                }
                row.insert(board[i][j]);
            }
        }
        for(int j=0;j<9;j++){
            unordered_set<char> col;
            for(int i=0;i<9;i++){
                if(board[i][j]=='.'){
                    continue;
                }
                if(col.count(board[i][j])){
                    return false;
                }
                col.insert(board[i][j]);
            }
        }
        for(int box=0;box<9;box++){
            unordered_set<char> seen;
            int startRow=(box/3)*3;
            int startCol=(box%3)*3;
            for(int i=startRow;i<startRow+3;i++){
                for(int j=startCol;j<startCol+3;j++){
                    if(board[i][j]=='.'){
                        continue;
                    }
                    if(seen.count(board[i][j])){
                        return false;
                    }
                    seen.insert(board[i][j]);
                }
            }
        }
        return true;
    }
};
