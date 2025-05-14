#include <iostream>
using namespace std;
int sum=0;
int rev(int n){
    if(n == 0){
        return sum;
    }
    sum = (sum*10) + (n%10);
   return rev(n/10);
}
int main() {

    cout<<"calling function"<<endl;
    int result=rev(1342);
    cout<<"reversed digit : "<<result<<endl;
    return 0;
}