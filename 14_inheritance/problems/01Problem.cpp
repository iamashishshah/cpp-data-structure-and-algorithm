/*
Overloading Methods in Derived Classes:

Create a base class Animal with a method speak(). Create derived classes like Dog and Cat, and override speak() in each. Try overloading speak() in the base class with a version that takes a parameter (e.g., speak(string sound)).
*/

#include<iostream>
#include<vector>

using namespace std;

class Animal{
    protected:
        string sound;

    public:
        Animal(){
            cout << "Without parameter base class constructor." << endl;
        }

        Animal(string sound): sound(sound){
            cout << "Parametrized base class constructor." << endl;
        }

        virtual void speak() const {
            cout << "Making sound in the generic method." << endl;
        }
};

class Dog: public Animal {
    public:
        Dog(): Animal("Bark"){}
        

        void speak() const override{
            cout << "Dog is making sound: " << sound << endl;
        }
};

class Cat: public Animal {
    public:
        Cat(): Animal("Meww"){}
        void speak() const override{
            cout << "Cat is making sound: " << sound << endl;
        }
};

int main(){
    Animal *petOne = new Cat();
    petOne->speak();
    cout << endl;
    return 0;
}