#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a;
    cout<<"enter the number =";
    cin>>a;
    cout<<"enter array size = ";
    vector<int>v;
    for(int i=0;i<a;i++){
    int x;
    cin>>x;
    v.push_back(x);
    }
    for(int i=0;i<v.size()-2;i++){
        for(int j=i+1;j<v.size()-1;j++)
        if(v[i]+v[j]==a) cout<<i<<","<<j<<endl;
    }
}
