#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of students = ";
    cin>>n;
    int x[n];
    cout<<"enter marks = ";
    for(int i=0;i<=n-1;i++){
    cin>>x[i];
    }
    for(int i=0;i<=n-1;i++){
        if(x[i]<35)
        cout<<x[i]<<" ";
    }
}