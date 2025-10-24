#include<iostream>
class player{
  public:
  int score;
  int health;
};
using namespace std;
int main(){
    player amit;
    amit.score = 89;
    amit.health = 100;
    cout<<amit.health<<endl;
    cout<<amit.score<<endl;

    player harsh;
    harsh.score = 99;
    harsh.health = 99;
    cout<<harsh.health<<endl;
    cout<<harsh.score;
}