#include<iostream>
using namespace std;
void swap(int *a,int *b){
int temp = *a;
*a=*b;
*b=temp;
}
int main(){
    int x=12,y=7;
    cout<<x<<" "<<y<<endl;
    swap(&x,&y);
    cout<<x<<" "<<y;
}