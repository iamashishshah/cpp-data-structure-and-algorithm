#include<iostream>
#include<vector>

using namespace std;

class Shape{
    public: 
        virtual void draw() = 0;



};

class Circle: public Shape{
    public:
        void draw() override{
            cout << "Circle is drawing..." << endl;
        }
};

class Square: public Shape{
    public: 
        void draw() override{
            cout << "Square is drawing..." << endl;
        }
};

int main(){
    Shape *shape = new Circle();
    //why am i taking Shape class while I'm creating object of circle class?

    cout << endl;
    return 0;
}