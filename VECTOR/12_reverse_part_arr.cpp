#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&a){
     for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
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
   cout<<endl;
   cout<<"the reverse part of the array is = ";
   reversePart(2,4,v);
   display(v);
}
