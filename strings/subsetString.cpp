#include<iostream>
using namespace std;

void subset(string ans,string str){
    if(str.empty()){
        cout<<ans <<" ";
        return ;
    }
    char ch=str[0];
    
        subset(ans+ch,str.substr(1));
        subset(ans+to_string(ch+0),str.substr(1));
        subset(ans,str.substr(1));
}
int main(){
    string str;
    string result="";
    cout<<"Enter string :";
    cin>>str;
    subset(result,str);
    return 0;
}