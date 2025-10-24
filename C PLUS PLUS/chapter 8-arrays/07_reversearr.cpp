#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,12,10};
    int n = sizeof(arr)/4;
    int arr1[n];
    for(int i=0;i<n;i++){
        int j = n-1-i;
        arr1[i]=arr[j];
         cout<<arr1[i]<<" ";
    }
    
}
