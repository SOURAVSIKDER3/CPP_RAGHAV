#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter row = ";
    cin>>a;
    cout<<"enter coloumn = ";
    cin>>b;
    for (int i=1;i<=a;i++){
        for(int i=1;i<=b;i++){
            cout<<"*";
        }
        cout<<endl;
    }
}