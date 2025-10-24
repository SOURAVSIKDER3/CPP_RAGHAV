#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr1;
    vector<int> arr2;
   for(int i=0;i<5;i++){
    int x;
    cin>>x;
    arr1.push_back(x);
    }
    for(int i=0;i<arr1.size();i++){
        int j =arr1.size()-1-i;
        arr2.push_back(arr1[j]);
         cout<<arr2[i]<<" ";
    }
    
}
