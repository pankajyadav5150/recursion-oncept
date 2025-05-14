// simple code just retur index

// #include<iostream>
// using namespace std;

// int linearSearch(int arr[],int index,int n,int target){
//     if(index == n-1){
//         return -1;
//     }
//     if(arr[index] == target){
//         return index;
//     }
//     return linearSearch(arr,index+1,n,target);
// }
// int main(){

//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int result=linearSearch(arr,0,n,9);
//     if(result == -1){
// cout<<"Element not fount !";
//     }
//     else{
//     cout<<"element on index no: "<<result<<endl;
//     return 0;
// }
//     }




// returning vector list


#include<iostream>
#include<vector>
using namespace std;

vector<int>linearSearch(int arr[],int index,int n,int target){
    if(index == n){
        return {};
    }
    vector <int> result= linearSearch(arr,index+1,n,target);
    if(arr[index] == target){
        result.insert(result.begin(),index);

    }
    return result;
}
int main(){

    int arr[11]={1,2,3,4,4,4,4,4,4,4,5};
    int n=11;
    vector<int> result=linearSearch(arr,0,n,45);
    if(result.empty()) {
        cout << "Element not found!" << endl;
    } else {
        cout << "Elements found at indices: ";
        for(int index : result){
            cout << index << " ";
        }
        cout << endl;
    }
    
    return 0;
}