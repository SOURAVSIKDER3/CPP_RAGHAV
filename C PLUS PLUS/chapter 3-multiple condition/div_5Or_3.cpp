#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n%5==0 || n%3==0)//logical and operator
    cout<<n<<" is divisible by 5 or 3";
  else
    cout<<n<<" is not divisible by 5 or 3";  
  
}