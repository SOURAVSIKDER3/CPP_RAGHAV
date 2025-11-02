#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
     for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
void sort01(vector<int>&v){
    int n = v.size();
    int i = 0;
    int j = n-1;
    int temp;
    while(i<j){
         if(v[i]==0) i++;
        if (v[j]==1) j--;
        if (i>j) break;
        if (v[i]==1 && v[j]==0){
            temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;
        }
    }

}
int main(){
    int x;
    cout<<"enter array size = ";
    cin>>x;
    cout<<"enter array elements = ";
    vector<int>v;
    for(int i=0;i<x;i++){
    int x;
    cin>>x;
    v.push_back(x);
    }
    cout<<"the array is = ";
    display(v);
    cout<<endl;
    sort01(v);
     cout<<endl;
     display(v);
   }
  
