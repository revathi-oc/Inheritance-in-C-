//REVATHI OC 
//23070123105
#include <iostream>
using namespace std;

class Carnivore {
public:
    void eatMeat() {
        cout << "Eats meat" << endl;
    }
};

class Herbivore {
public:
    void eatPlants() {
        cout << "Eats plants" << endl;
    }
};

class Omnivore : public Carnivore, public Herbivore {
public:
    void eat() {
        eatMeat();
        eatPlants();
        cout << "This animal is an omnivore and eats both" << endl;
    }
};

int main() {
    cout<<"2.Multiple inheritance"<<endl;
    Omnivore bear;
    bear.eat();  
    return 0;
}
