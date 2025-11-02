#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
int main(){
    cout<<"enter array elements = ";
    vector<int>v;
    for(int i=0;i<5;i++){
    int x;
    cin>>x;
    v.push_back(x);
    }
    cout<<"the array is = ";
   display(v);

   vector <int> v2(v.size());
   for(int i=0;i<v2.size();i++){
    v2[i]=v[5-1-i];
   }
   cout<<"the reverse array is = ";
   display(v2);
}
