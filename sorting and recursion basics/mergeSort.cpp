#include<iostream>
#include<vector>
using namespace std;

vector<int> merge(vector<int> left,vector<int> right){
    vector <int> result;
    int i=0;
    int j=0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right [j]){
            result.push_back(left[i]);
            i++;
        }
        else{
            result.push_back(right[j]);
            j++;
        }
    }
    while(i < left.size()){
        result.push_back(left[i++]);
    }
    while(j < right.size()){
        result.push_back(right[j++]);
    }

    return result;
}

vector <int> mergeSort(vector <int> arr){
    if(arr.size() == 1){
        return arr;
    }
    int mid=arr.size()/2;
    vector <int> left =mergeSort(vector <int>(arr.begin(), arr.begin() + mid));
    vector <int> right =mergeSort(vector <int>(arr.begin() + mid, arr.end()));

    return merge(left,right);
}
int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: "<<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> sorted = mergeSort(arr);

    cout << "Sorted array: ";
    for (int num : sorted)
        cout << num << " ";
    
    cout << endl;
    return 0;
}