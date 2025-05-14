#include<iostream>
using namespace std;
bool sorted(int arr[] ,int index,int n){
   if(index == n-1){
    return true;
   }

   return (arr[index] < arr[index+1]) && sorted(arr,index+1,n);

}
int main(){
    int arr[5]={1,2,3,1,5};
    int n=5;
    bool result=sorted(arr,0,n);
    if(result){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
        return 0;
}