#include<iostream>
using namespace std;
int main(){
    int arr[]={2,4,1,9};
    int n = sizeof(arr)/4;
    int mx=arr[0];
    int mn=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>mx) mx=arr[i];
        }
        cout<<mx<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]<mn) mn=arr[i];
        }
        cout<<mn;
}
