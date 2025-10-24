#include<iostream>
using namespace std;
int main(){
    int fact=1,n;
    cout<<"enter a number= ";
    cin>>n;
    for(int i=n/2;i>=1;i--){
    if(n%i==0){ fact=i;
    cout<<fact<<" ";
    break;
    }
     }
     
}