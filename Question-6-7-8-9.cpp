#include <iostream>
#include <sstream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Player {
   private:
    string name;
    int hitPoints;

   public:
    //❓❓ QUESTION 9, add the constructor here:

    Player(string n, int h) {
        name = n;
        hitPoints = h;
    }

    string getName() {
        return name;
    }

    int getHitPoints() {
        return hitPoints;
    }

    void damage(int points) {
        if (points > hitPoints)
            hitPoints = 0;
        else
            hitPoints = hitPoints - points;
    }
};

int main() {
    //❓❓ QUESTION 9, add to the main function here:
}
