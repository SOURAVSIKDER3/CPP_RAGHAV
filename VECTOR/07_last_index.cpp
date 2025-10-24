#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);
    }
    int x;
    cin>>x;
    int idx=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x)idx=i;
    }
    cout<<"the index number is = "<<idx;
}
