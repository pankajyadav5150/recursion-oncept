#include<iostream>
using namespace std;
void pad(string p,string up){
  if(up.empty()){
    cout<<p<<endl;
    return ;
  }
  int index=up[0]- '0';
  for(int i=(index-1)*3;i<(index*3);i++){
    char ch='a'+i;
    pad(p + ch ,up.substr(1));
  }
}
int main(){
    string str;
    string result="";
    cout<<"Enter string :";
    cin>>str;
    pad(result,str);
    return 0;
}