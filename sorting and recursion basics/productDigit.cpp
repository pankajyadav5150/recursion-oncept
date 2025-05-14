#include <iostream>
using namespace std;
int productDigit(int n){
    if(n%10 ==n){
        return n;
    }
    return (n%10) *productDigit(n/10);
}
int main() {

    cout<<"calling function"<<endl;
    int result=productDigit(1342);
    cout<<"product digit : "<<result<<endl;
    return 0;
}