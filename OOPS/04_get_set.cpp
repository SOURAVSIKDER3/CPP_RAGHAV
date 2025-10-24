#include<iostream>
using namespace std;
class player{
  private:
  int score;//data members
  int health;
  public:
  //setter
  void setScore(int s){
    score=s;
  }
  void setHealth(int h){
    health = h;
  }
int getScore(){
    return score;
}
int getHealth(){
    return health;
}
};
using namespace std;
int main(){
    player amit;
    amit.setScore(10);
    cout<<amit.getScore();
}