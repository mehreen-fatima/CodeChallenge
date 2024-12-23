#include<iostream>

using namespace std;

class Animal{

    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
    void makeSound(){
        cout<<"Animal is making sound"<<endl;
    }
};

class lion: public Animal{

    public:
    void eat(){
        cout<<"lion is eating meat"<<endl;
    }
    void makeSound(){
        cout<<"lion is Roaring"<<endl;
    }
};
class Bird: public Animal{

    public:
    void eat(){
        cout<<"bird is eating seeds"<<endl;
    }
    void makeSound(){
        cout<<"bird is chirping"<<endl;
    }
};
class Zebra: public Animal{

    public:
    void eat(){
        cout<<"Zebra is eating grass"<<endl;
    }
    void makeSound(){
        cout<<"zebra is braying"<<endl;
    }
};

int main(){

    Animal cat;
    cat.eat();
    cat.makeSound();
    Zebra stripes;
    stripes.eat();
    stripes.makeSound();
    lion simba;
    simba.eat();
    simba.makeSound();
    Bird parrot;
    parrot.eat();
    parrot.makeSound();


}