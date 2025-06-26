#include <iostream>
using namespace std;
void dice(string p,int target){
    if(target == 0){
        cout<<p<<endl;

        return;
    }
    for(int i=1;i<=6 &&i<=target;i++){
     dice(p+to_string(i),target-i);
    }
}
int  main(){
     int target;
    cout<<"Enter number from 1 to 6 :";
    cin>>target;
    dice("",target); 
    return 0;
}