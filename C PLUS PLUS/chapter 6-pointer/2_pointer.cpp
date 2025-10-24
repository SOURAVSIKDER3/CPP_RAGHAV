#include<iostream>
using namespace std;
int main(){
    int x=8;
    int* p = &x;//pointer is p
    cout<<p<<endl;
    cout<<* p<<endl;
    cout<<&p;
}