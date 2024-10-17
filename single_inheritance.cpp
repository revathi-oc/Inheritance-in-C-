//REVATHI OC 
//23070123105
#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "This animal eats" << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() {
        cout << "This animal is a carnivore and eats meat" << endl;
    }
};

int main() {
    cout<<"1.Single inheritance"<<endl;
    Carnivore tiger;
    tiger.eat();  
    return 0;
}
