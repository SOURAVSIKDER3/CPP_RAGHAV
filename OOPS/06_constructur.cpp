#include<iostream>
using namespace std;
class Car{
public:    
    string name;
    int price;
    int seats;
    string type; 
    Car(string n,int p,int s,string t){
        name =n;
        price = p;
        seats = s;
        type = t;
    }
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<c.price<<" "<<c.seats<<c.type<<endl;
}
int main(){
    Car c1("honda city",200000,5,"seadan");

   // Car c2;
    
    print(c1);
   // print(c2);
}