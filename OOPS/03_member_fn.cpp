#include<iostream>
using namespace std;
class player{
  public:
  int score;//data members
  int health;
  void showHealth(){//member function
    cout<<"health is = "<<health<<endl;
  }
  void showScore(){
    cout<<"score is = "<<score;  
  }
};
using namespace std;
int main(){
    player amit;
    amit.score = 89;
    amit.health = 100;
    amit.showHealth();
    amit.showScore();
}