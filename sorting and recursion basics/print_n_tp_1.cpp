#include<iostream>
using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    cout<<"number : "<<n<<endl;
    fun(n-1);
    cout<<"number : "<<n<<endl;

}
int main() {
    cout<<"calling function"<<endl;
    fun(5);
    return 0;
}