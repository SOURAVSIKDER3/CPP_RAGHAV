#include<iostream>

class player{
public:
    int score;

    // This is your "setter" function. It lets you safely put a value into health.
    // I even threw in a little check to make sure health doesn't go negative!
    void setHealth(int h) {
        if (h >= 0) {
            health = h;
        } else {
            std::cout << "Nah, health can't be less than zero, buddy!" << std::endl;
        }
    }

    // And this is your "getter" function. It lets you peek at what health is.
    int getHealth() {
        return health;
    }

private:
    int health; // Still keeping this little guy under wraps!
};

using namespace std;

int main(){
    player amit;
    amit.score = 89;
    amit.setHealth(100); // Use the door to set Amit's health
    cout << amit.getHealth() << endl; // Use the door to see Amit's health
    cout << amit.score << endl;

    player harsh;
    harsh.score = 99;
    harsh.setHealth(99); // Same for Harsh
    cout << harsh.getHealth() << endl;
    cout << harsh.score;

    return 0;
}