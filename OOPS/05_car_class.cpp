#include<iostream>
using namespace std;
class Car{
public:    
    string name;
    int price;
    int seats;
    string type; 
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<c.price<<" "<<c.seats<<c.type<<endl;
}
int main(){
    Car c1;
    c1.name=" suzuki";
    c1.price=300000;
    c1.seats=5;
    c1.type="seadan";

    Car c2;
    c2.name="bugati";
    c2.price=30000000;
    c2.seats=2;
    c2.type="race"; 
    
    print(c1);
    print(c2);
}