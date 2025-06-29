#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
void displayresult( vector<vector<bool>> board){
 for (int i=0;i<board.size();i++) {
            cout<<"[";
        for (int j=0;j<board[0].size();j++) {
            if(board[i][j]){
                cout<<"Q";
            }
            else{
                cout<<"X";
            }
            cout<<" ";
        } 
        cout<<"]";
        cout << endl;
    }

}

bool isSafe(vector<vector<bool>> &board,int row,int col){
    //check vertical
    for(int i=0;i<row;i++){
        if(board[i][col]){
            return false;
        }
    }

    //check left diagnol
    int leftmax=min(row,col);
     for(int i=1;i<=leftmax;i++){
        if(board[row-i][col-i]){
            return false;
        }
    }

    //check right diagnol
int rightmax = min(row, (int)(board.size() - col - 1));
     for(int i=1;i<=rightmax;i++){
        if(board[row-i][col+i]){
            return false;
        }
    }

    return true;
}

void Queens( vector<vector<bool>> &board,int row){
    if(row == board.size()){
        displayresult(board);
        cout << endl;
        return;
    }

    for(int col=0;col<board.size();col++){
        //place queen if safe
        if(isSafe(board,row,col)){
           board[row][col]=true;
           Queens(board,row+1);
           board[row][col]=false;
        }
    }
}

int main(){
 vector<vector<bool>> board(6, vector<bool>(6));
     Queens(board,0);

    return 0;
}
