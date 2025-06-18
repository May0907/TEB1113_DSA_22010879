// NAME: CHEAH SUET MAY
// ID: 22010879
// LAB: 2
#include <iostream>
using namespace std;
int win[8][3] = { {0, 1, 2},{3, 4, 5},{6, 7, 8},{0, 3, 6},{1, 4, 7},{2, 5, 8},{0, 4, 8},{2, 4, 6} }; 
bool Win(char* board, char c){
    for (int i = 0; i < 8; i++)
        if (board[win[i][0]] == c &&
            board[win[i][1]] == c &&
            board[win[i][2]] == c)
            return true;
    return false;
}
bool valid(char board[9]){
    int xCount = 0, oCount = 0;
    for (int i = 0; i < 9; i++)
    {
        if (board[i] == 'X') xCount++;
        if (board[i] == 'O') oCount++;
    }
    if (xCount == oCount || xCount == oCount + 1)
    {
        if (Win(board, 'O'))
        {
            if (Win(board, 'X'))
                return false;
            return (xCount == oCount);
        }
        if (Win(board, 'X') && xCount != oCount + 1)
            return false;
        return true;
    }
    return false;
}
int main(){
    char board[] = { 'X', 'X', ' ',
                    'O', ' ', 'X',
                    'X', 'O', 'X' };
    (valid(board)) ? cout << "Given board is valid" :
        cout << "Given board is not valid";
    return 0;
}