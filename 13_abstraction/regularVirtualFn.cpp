#include<iostream>
#include<vector>

using namespace std;
class Base{
    public:
        virtual void show(){
            cout << "Base class show." << endl;
        }
};

class Derived: public Base{
    public:
        void show(){
            cout << "Derived class show fn." << endl;
        }
};

int main(){
    Derived derived;
    derived.show();

    Base base;
    base.show();
    cout << endl;
    return 0;
}