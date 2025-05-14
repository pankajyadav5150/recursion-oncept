#include <iostream>
using namespace std;
int sumDigit(int n){
    if(n == 0){
        return 0;
    }
    return (n%10) +sumDigit(n/10);
}
int main() {

    cout<<"calling function"<<endl;
    int result=sumDigit(1342);
    cout<<"sum digit  of 5 is : "<<result<<endl;
    return 0;
}