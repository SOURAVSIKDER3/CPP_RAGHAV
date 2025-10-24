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
};
int main(){
    cricketer c1("ms dhoni",21000);
    cricketer c2("suresh raina",19000);
    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}