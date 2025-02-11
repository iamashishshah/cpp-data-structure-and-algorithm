#include<iostream>
#include<vector>

using namespace std;

class Tea{
    private:
        virtual void  prepareIngredients() = 0;
        virtual void brew() = 0;
        virtual void serve() = 0;
        string author = "Ashish Shah";

    public:
        void print(){
            cout << "Print fn in base class. " << endl;
        }

        void makeTea(){
            prepareIngredients();
            brew();
            serve();
        }
};

/*
However, a private virtual function can still be called from a derived class if it is invoked through a public or protected interface of the base class, as long as the function is made accessible through that interface.
*/

// derived class
class GreenTea: public Tea{
    public: 
        void prepareIngredients() override {
            cout << "Green leaves and water is ready." << endl;
        }

        void brew() override{
            cout << "Green tea brewed. " << endl;
        }

        void serve() override{
            cout << "Green tea served." << endl;
        }

        void display(){
            cout << "Normal display method." << endl;
        }
};

class MasalaTea: public Tea{
    public:
        void prepareIngredients() override {
            cout << "Green leaves and water is ready with masala." << endl;
        }

        void brew() override {
            cout << "Masala tea brewed." << endl;
        }

        void serve() override{
            cout << "Masala tea served." << endl;
        }

        void tempMethod(){
            cout << "Normal temp method." << endl;
        }
};

int main(){
    Tea* tea = nullptr;
    tea = new GreenTea();
    cout << tea << endl;

    GreenTea greenTea;
    greenTea.brew();
    // greenTea.makeTea();

    cout << endl;
    MasalaTea masalaTea;
    masalaTea.makeTea();
    cout << endl;
    return 0;
}