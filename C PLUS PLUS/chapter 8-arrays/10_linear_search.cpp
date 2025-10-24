#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"enter size of array = ";
    cin>>n;
    cout<<"put the elements = ";
    int arr[n];
    for(int i=0;i<=n-1;i++){
      cin>>arr[i];
    }
    cout<<"enter the element you want to search = ";
    cin>>a;
    for(int i=0;i<n-1;i++){
      if(arr[i]==a) cout<<"find the element "<<a;
      else cout<<"not found "<<a;
      break;
    }
}
