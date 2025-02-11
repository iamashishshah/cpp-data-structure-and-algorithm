#include<iostream>
#include<vector>

using namespace std;

class Base{
    public: 
        virtual void show(){  // regular virtaul function
            cout << "Base class show fn." << endl;
        }

        virtual void calculate() = 0;  // pure virtual funtion
};

class Derived: public Base{
    public:
        // void show() override{
        //     cout << "Derived class show fn." << endl;
        // }

        void display(){
            cout << "Derived class display fn." << endl;
        }
};

int main(){
    // Base base;
    // base.show();
    cout << endl;
    return 0;
}