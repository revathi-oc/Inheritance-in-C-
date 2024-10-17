//REVATHI OC 
//23070123105
#include <iostream>
using namespace std;

class Animal {
public:
    void breathe() {
        cout << "This animal breathes" << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() {
        cout << "This animal is a carnivore and eats meat" << endl;
    }
};

class Herbivore : public Animal {
public:
    void eat() {
        cout << "This animal is a herbivore and eats plants" << endl;
    }
};

class Omnivore : public Animal {
public:
    void eat() {
        cout << "This animal is an omnivore and eats both plants and meat" << endl;
    }
};

int main() {
    cout<<"4.Hierarchical inheritance"<<endl;
    Carnivore tiger;
    Herbivore deer;
    Omnivore human;

    tiger.breathe();  
    tiger.eat();      

    deer.breathe();   
    deer.eat(); 
          
    human.breathe();  
    human.eat();     

    return 0;
}
