#include<iostream>
using namespace std;

string stream(string ans,string str){
    if(str.empty()){
        return ans;
    }
    char ch=str[0];
    str=str.substr(1);
    if(ch =='a'){
       return stream(ans,str);
    }else{
         return stream(ans+ch,str);
    }
}
int main(){
    string str;
    string result="";
    cout<<"Enter string for replace a into string :";
    cin>>str;
    string ans=stream(result,str);
    cout<<"After remove a :"<<ans;
    return 0;
}