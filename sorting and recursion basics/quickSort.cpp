#include<iostream>
using namespace std;
void sort(int arr[],int low,int hi){
    if(low >= hi){
        return ;
    }
    int s=low;
    int e=hi;
    int m=s+(e-s)/2;
    int pivot=arr[m];

    while(s<=e){
        while(arr[s] < pivot){
            s++;
        }
        while(arr[e]>pivot){
            e--;
        }
        if(s<=e){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }

    }

    sort(arr,low,e);
    sort(arr,s,hi);

}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

     sort(arr,0,n-1);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    
    cout << endl;
    return 0;
}