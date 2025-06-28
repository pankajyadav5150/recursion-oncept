#include<iostream>
#include<vector>
using namespace std;
void allPath(string p,vector<vector<bool>> maze,vector<vector<int>>path ,int r, int c,int step){
    if(r == maze.size()-1 && c == maze[0].size()-1){
    path[r][c]=step;
         for (int i=0;i<path.size();i++) {
            cout<<"[";
        for (int j=0;j<path[0].size();j++) {
            cout << path[i][j] << ",";
        } 
        cout<<"]";
        cout << endl;
    }
        cout<<p<<endl<<endl;
    }
    if(!maze[r][c]){
        return;
    }
    maze[r][c]=false;
    path[r][c]=step;

    if(r < maze.size()-1){
        allPath(p +"D",maze,path,r+1,c,step+1);
    }
     if(c < maze[0].size()-1){
        allPath(p +"R",maze,path,r,c+1,step+1);
    }
      if(c > 0){
        allPath(p +"L",maze,path,r,c-1,step+1);
    }
      if(r > 0){
        allPath(p +"U",maze,path,r-1,c,step+1);
    }

    maze[r][c]=true;
    path[r][c]=0;

}
int main(){

    vector<vector<bool>> data;
    data.push_back({true,true,true,true,true});
    data.push_back({false,true,false,true,false});
    data.push_back({true,true,true,true,true});
    data.push_back({true,false,true,true,true});
    data.push_back({true,true,true,true,true});
  vector<vector<int>> path(5, vector<int>(5, 0));
    allPath("",data,path,0,0,1);
    return 0;
}
