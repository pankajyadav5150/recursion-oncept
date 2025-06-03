#include<iostream>
#include<vector>
using namespace std;

vector<string> permutation(string p,string up){
    vector<string> result;

    if(up.empty()){
        vector<string> list;
        list.push_back(p);
        return list;
    }
    char ch=up[0];
      for(int i=0;i<=p.length();i++){

        string f=p.substr(0,i);
        string s=p.substr(i);
       vector<string> loopans=permutation(f + ch + s,up.substr(1));
       result.insert(result.end(),loopans.begin(),loopans.end());
      }

      return result;


}
int main(){
     string str;
    cout << "Enter string: ";
    cin >> str;

    vector<string> result = permutation("", str);

    cout << "Permutations:\n";
    for (string s : result) {
        cout << s << endl;
    }
    return 0;
}
