#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter row = ";
    cin>>a;
    cout<<"enter coloumn = ";
    cin>>b;
    for (int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            cout<<j;
        }
        cout<<endl;
    }
}