#include <iostream>
using namespace std;
int factorial(int n){
    if(n <= 1){
        return 1;
    }
    return n* factorial(n-1);
}
int main() {

    cout<<"calling function"<<endl;
    int result=factorial(5);
    cout<<"factorial of 5 is : "<<result<<endl;
    return 0;
}