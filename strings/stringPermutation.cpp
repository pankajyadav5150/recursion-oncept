#include<iostream>
using namespace std;
int i=1;
void permutation(string p,string up){
  if(up.empty()){
    cout<< i++<<" "<<p<<endl;
    return ;
  }
  char ch=up[0];
  for(int i=0;i<= p.length();i++){
    string f=p.substr(0,i);
    string s=p.substr(i);
    permutation(f + ch + s,up.substr(1));
  }
}
int main(){
    string str;
    string result="";
    cout<<"Enter string :";
    cin>>str;
    permutation(result,str);
    return 0;
}