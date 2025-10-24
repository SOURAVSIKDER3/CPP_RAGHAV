#include<iostream>
using namespace std;
void sum(int a,int b){//formal parameters
    cout<<"the sum is = ";
 cout<<a+b;
}
int main(){
    int a,b;
    cout<<"enter 1st number= ";
    cin>>a;
    cout<<"enter 2nd number= ";
    cin>>b;
    sum(a,b);
}