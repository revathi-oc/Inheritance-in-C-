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
        cout << "This animal is a carnivore" << endl;
    }
};

class Lion : public Carnivore {
public:
    void roar() {
        cout << "The lion roars" << endl;
    }
};

int main() {
    cout<<"3.Multilevel inheritance"<<endl;
    Lion simba;
    simba.eat();   
    simba.roar();  
    return 0;
}
