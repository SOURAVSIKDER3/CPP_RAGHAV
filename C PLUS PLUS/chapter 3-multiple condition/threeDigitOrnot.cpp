#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a number = ";
  cin>>n;
  if(n>99 && n<1000)//logical and operator
    cout<<n<<" is a three digit number";
  else
    cout<<n<<" not a three digit number";  
  }