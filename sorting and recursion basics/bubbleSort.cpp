#include<iostream>
using namespace std;
 void bubbleSort(int arr[],int r,int c){
    if(r == 0){
        return;
    }
    if(c < r){      
        if(arr[c] > arr[c+1]){
            int temp=arr[c];
            arr[c]=arr[c+1];   //swap part 
            arr[c+1]=temp;
        }
        bubbleSort(arr,r,c+1);   // example r=5;c=0,1,2,3,4
    }
    else{
        bubbleSort(arr,r-1,c=0);  //example r=4,r=3,=r=2,r=1,r=0   c always put 0;
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
    
    bubbleSort(arr,n-1,0);

    cout<<"After sorting :";

    for(int i=0;i < n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}