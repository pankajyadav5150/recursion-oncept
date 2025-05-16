#include<iostream>
using namespace std;

string cutApple(string str){
    if(str.empty()){
        return "";
    }
    if(str.substr(0,5) !="apple" && str.substr(0,3)== "app"){
       return cutApple(str.substr(3));
    }else{
         return  str[0]+cutApple(str.substr(1));
    }
}
int main(){
    string str;
    cout<<"Enter string for replace a into string :";
    cin>>str;
    string ans=cutApple(str);
    cout<<"After remove a :"<<ans;
    return 0;
}