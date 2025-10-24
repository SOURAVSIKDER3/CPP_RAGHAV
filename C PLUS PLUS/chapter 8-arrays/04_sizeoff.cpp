#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/4;
    int sum=0;
    for(int i=0;i<n;i++){
        sum= sum+arr[i];
        }
        cout<<sum;
}
