#include <bits/stdc++.h>
using namespace std;
void sumTriangle(int arr[],int n){
    if(n < 1) return;

    int temp[n-1];
    for(int i=0;i < n-1;i++){
        int x=arr[i]+arr[i+1];
        temp[i]=x;
    }
    sumTriangle(temp,n-1);
//print array after returning from stack

for(int j=0;j < n ;j++){
    if(j == n-1) cout<<arr[j];
    else cout<<arr[j]<<",";
}
cout<<endl;
}
int main()
{
cout<<"Enter size of array :";
int n;
cin>>n;
int arr[n];
cout<<"Enter values :"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}    

cout<<"answer :"<<endl;
sumTriangle(arr,n);

  return 0;
}
