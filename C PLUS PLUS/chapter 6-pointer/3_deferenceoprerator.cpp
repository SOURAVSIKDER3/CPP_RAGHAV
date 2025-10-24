#include<iostream>
using namespace std;
int main(){
    int x =12;
    int* ptr = &x;
    cout<<*ptr<<endl;
    *ptr=35;
    cout<<x;
}