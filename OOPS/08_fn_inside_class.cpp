#include<iostream>
using namespace std;
class cricketer{
public:
     string name;
     int runs;
     
     cricketer(string name,int runs){
        this->name = name;
        this->runs = runs;
     }
     void print(){
        cout<<this->name<<" "<<this->runs<<endl;
     }
};
int main(){
    cricketer c1("ms dhoni",21000);
    cricketer c2("suresh raina",19000);
    c1.print();
    c2.print();
}