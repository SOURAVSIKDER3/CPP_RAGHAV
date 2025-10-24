#include<bits/stdc++.h>
using namespace std;
void change(vector <int>a){
a[0]=99;
for(int i=0;i<5;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    for(int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);
    }
    for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
    change(v);
    for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
    }
}

