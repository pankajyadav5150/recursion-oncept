#include<iostream>
#include<vector>
using namespace std;

void mergeInPlace(int arr[],int s,int m,int e){
    int size =e-s;
    int result[size];
    int i=s;
    int j=m;
    int k=0;
    while(i < m && j< e){
        if(arr[i] < arr[j]){
            result[k]=arr[i];
            i++;
        }
        else{
            result[k]=arr[j];
            j++; 
        }
        k++;
    }
    while(i < m){
        result[k] = arr[i++];
        k++;
    }
    while(j<e){
        result[k] = arr[j++];
        k++;
    }

    for (int k = 0; k < sizeof(result)/sizeof(result[0]); k++) {
        arr[s + k] = result[k];
    }
}

void mergeSortInPlace( int arr[],int s,int e){
    if(e-s == 1 ){
  return;
    }

    int mid =(s+e)/2;
    mergeSortInPlace(arr,s,mid);
    mergeSortInPlace(arr,mid,e);
    
    mergeInPlace(arr,s,mid,e);
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

     mergeSortInPlace(arr,0,n);

    cout << "Sorted array: ";
    for (int num : arr)
        cout << num << " ";
    
    cout << endl;
    return 0;
}