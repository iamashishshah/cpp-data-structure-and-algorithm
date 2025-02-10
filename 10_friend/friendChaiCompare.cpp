#include<iostream>

using namespace std;

class Chai{
    private:
        string teaName;
        int servings;

    public:
        Chai(int serve, string name): teaName(name), servings(serve){
            cout << "Constructor has called. \n";
        }

        void display() const{
            cout << "Display method called in class Chai. " << endl;
        }

        friend bool compareFunction(Chai &, Chai &);
};

bool compareFunction(Chai &firstTea, Chai &secondTea){
    return firstTea.servings > secondTea.servings;
}

int main(){
    Chai lemonTea(434, "Lemon tea");
    Chai gingerTea(56, "Ginger tea");

    // how Can i know who has most servings

    if(compareFunction(lemonTea, gingerTea)){
        cout << "Lemon tea has more servings. \n";
    }else{
        cout << "Ginger tea has more servings. \n";
    }

    cout << endl;
    return 0;
}