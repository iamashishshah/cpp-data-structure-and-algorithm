#include<iostream>
#include<vector>

using namespace std;

// base class
class Tea{
    protected: 
        string teaName;
        int servings;
    public:
        Tea(string name, int serve): servings(serve), teaName(name){
            cout << "Tea constructor called " << teaName << endl;
        }

        virtual void brew() const {
            cout << "Brewing " << teaName << " with generic method." << endl;
        }

        virtual void serve() const {
            cout << "Serving " << servings << " cups of tea with generic method." << endl;
        }

        // virtual ~Tea(){
        //     cout << "Base class destructor called" << endl;
        // }
};


class GreenTea: public Tea{
    public: 
        GreenTea(int serve): Tea("Green Tea", serve){
            cout << "Green tea constructor called." << endl;
        }

        void brew() const override{
            cout << teaName << " Brewing by steeping green tea leaves." << endl;
        }

        // ~GreenTea(){
        //     cout << "Green tea destructor called." << endl;
        // }
};

class MasalaTea: public Tea{
    public:
        MasalaTea(int serve): Tea("Masala tea", serve){
            cout << "Masala tea constructor Called." << endl;
        }

        void brew() const override final{
            cout << teaName << " with spices and milk." << endl;
        }

        // ~MasalaTea(){
        //     cout << "Masala tea destructor called." << endl;
        // }
};  

// final keyword example: that means we can't override again in child class

// class SpicyMasalaTea: public MasalaTea{
//     public:
//         void brew() const override{
//             cout << "Brewing in spicy masala tea class." << endl;
//         }
// };

/*
It means that C++ allows you to store objects of a derived class in a pointer or reference of the base class type. This is extremely useful because it lets you write more flexible and reusable code. Specifically, it allows you to treat objects of different derived classes in a uniform way by referring to them through the base class.
*/

int main(){
    /*
    Polymorphism is one of the core concepts of object-oriented programming (OOP). It allows an object of a derived class to be treated as an object of the base class, using a base class pointer or reference
    */
    Tea* teaOne = new GreenTea(2);
    Tea* teaTwo = new MasalaTea(3);
    teaOne = teaTwo;
    teaOne->serve();  // teaOne teaTwo are holding just pointers nothing else, they can be shallowed

    // GreenTea greenTea(3);
    // greenTea.serve();

    // teaOne->brew();
    // teaOne->serve();

    delete teaOne;
    delete teaTwo;


    cout << endl;
    return 0;
}

