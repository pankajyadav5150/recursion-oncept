#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
int cnt=0;
void displayresult( vector<vector<bool>> board){
 for (int i=0;i<board.size();i++) {
            cout<<"[";
        for (int j=0;j<board[0].size();j++) {
            if(board[i][j]){
                cout<<"K";
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
bool isValid(vector<vector<bool>> &board,int row,int col){
    if(row >= 0 && row < board.size() && col >= 0 && col < board.size() ){
        return true;
    }
    return false;
}

bool isSafe(vector<vector<bool>> &board,int row,int col){
    //check uperleft
 if(isValid(board,row-2,col-1)){
    if(board[row-2][col-1]){
        return false;
    }
 }
     //check uperRight
 if(isValid(board,row-2,col+1)){
    if(board[row-2][col+1]){
        return false;
    }
 }  
   //check oneuperleft
 if(isValid(board,row-1,col-2)){
    if(board[row-1][col-2]){
        return false;
    }
 }  
   //check oneuperright
 if(isValid(board,row-1,col+2)){
    if(board[row-1][col+2]){
        return false;
    }
 }

    return true;
}

void Nknights( vector<vector<bool>> &board,int row,int col,int knight){
    if(knight == 0){
        displayresult(board);
        cnt=cnt+1;
        cout <<"count: "<<cnt;
        cout << endl;
        return;
    }
    if(col == board.size()){
        Nknights(board,row+1,0,knight);
        return;
    }

    if(row == board.size()){
        return;
    }

    if(isSafe(board,row,col)){
        board[row][col]=true;
        Nknights(board,row,col+1,knight-1);
        board[row][col]=false;
    }

        Nknights(board,row,col+1,knight);
}

int main(){
 vector<vector<bool>> board(4, vector<bool>(4));
     Nknights(board,0,0,4);

    return 0;
} 
