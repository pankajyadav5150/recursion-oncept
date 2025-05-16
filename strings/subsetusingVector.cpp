#include<iostream>
using namespace std;
#include<vector>

vector <string> subset(string ans,string str){
    if(str.empty()){
        return {ans};
    }
    char ch=str[0];
       vector <string> left= subset(ans+ch,str.substr(1));
       vector <string> right=   subset(ans,str.substr(1));
       left.insert(left.end(),right.begin(),right.end());
       return left;
}
int main(){
    string str;
    string result="";
    cout<<"Enter string :";
    cin>>str;
    vector <string> ans=subset(result,str);
    for(string values : ans){
        cout<<values<<" ";
    }
    return 0;
}