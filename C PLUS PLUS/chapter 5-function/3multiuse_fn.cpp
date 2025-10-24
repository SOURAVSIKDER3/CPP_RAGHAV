#include<iostream>
using namespace std;
void india(){
    cout<<"you are in india"<<endl;
}
void usa(){
    cout<<"you are in usa"<<endl;
    india();
}
int main(){
 cout<<"you are in main"<<endl;
 usa();
 india();
}