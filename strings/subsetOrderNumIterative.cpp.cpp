#include<iostream>
#include<vector>
using namespace std;

vector <vector<int>> subset(vector<int>arr){
    vector<vector<int>> result;
    result.push_back({});
    int arr_size=arr.size();
    for(int i=0;i<arr_size;i++){
        int n=result.size();
        for(int j=0;j<n;j++){
            vector<int> temp=result[j];
            temp.push_back(arr[i]);
            result.push_back(temp);

        }
    }
    return result;
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = subset(arr);

    cout << "Subsets:\n";
    for(int i=0;i<ans.size();i++){
        int n=ans[i].size();
        cout<<"[ ";
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"]";

        cout<<endl;
    }


    return 0;
}