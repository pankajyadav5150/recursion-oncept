#include<iostream>
using namespace std;
 void selection(int arr[],int r,int c,int max){
    if(r == 0){
        return;
    }
    if(c < r){      
        if(arr[c] > arr[max]){
            selection(arr,r,c+1,c);
        }else{
            selection(arr,r,c+1,max);
        }
    }
    else{
        int temp=arr[max];
        arr[max]=arr[r-1];   //swap part  put largest value into last index
        arr[r-1]=temp;
        selection(arr,r-1,c=0,0);  //example r=4,r=3,=r=2,r=1,r=0   c and max always put 0;
    }
 }
int main(){

    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements : "<<endl;
    for(int i=0;i < n;i++){
        cin>>arr[i];
    }
    //sorting function call
    
    selection(arr,n,0,0); 

    cout<<"After sorting :";

    for(int i=0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}