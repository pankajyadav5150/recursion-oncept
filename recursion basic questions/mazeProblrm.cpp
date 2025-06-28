#include<iostream>
#include<vector>
using namespace std;
int count =1;
// only return the count
// int pathCount(int r,int c){
//     if(r==1 || c==1){
//         return 1;
//     } 
//     int left =pathCount(r-1,c);
//     int right =pathCount(r,c-1);
//     return left + right;
// }

// retrun the path as Down (D) or Right (R)
// void mazePath(string p,int r,int c){
//     if(r == 1 && c==1){
//         cout<<"Path:"<<count++<<" " <<p<<endl;
//     }

//     if(r > 1){
//         mazePath(p + 'D', r-1 , c);
//     }
//     if(c > 1){
//         mazePath(p + 'R', r , c-1);
//     }
// }

vector<string> Maze(string p,int r,int c){
    vector<string> result;
    vector<string>left;
    vector<string>right;
    vector<string>diagnol;
    if(r ==1 && c==1){
        return {p};
    }
    if(r>1 && c>1){
       diagnol= Maze( p + "D",r-1,c-1);
    }
if(r>1){
    left=Maze( p + "V",r-1,c);
}
if(c>1){
    right=Maze( p + "H",r,c-1);
}
result.insert(result.end(),diagnol.begin(),diagnol.end());
result.insert(result.end(),left.begin(),left.end());
result.insert(result.end(),right.begin(),right.end());
return result;

}

int main(){ 


// only return the count

// int result=pathCount(3,3);
// cout<<"result : " <<result;


// print the path
// mazePath("",10,10);

//return int vector

vector<string> ans=Maze("",3,3);
for(string answer :ans){
cout<<"["<<answer<<"]"<<endl;
}

    return 0;
}