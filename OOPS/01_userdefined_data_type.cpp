#include<iostream>
using namespace std;
class Student{
public:    
    string name;
    int roll;
    float gpa;

};
int main(){
    Student x;
    x.name = "sourav";
    //x.roll = 13;
    x.gpa = 9.7;
    cin>>x.roll;

    Student s;
    s.name = "amit";
    s.roll = 33;
    s.gpa = 8.7;
    cout<<s.name<<" "<<s.roll<<" "<<s.gpa<<endl;
    cout<<x.name<<" "<<x.roll<<" "<<x.gpa<<endl;
}