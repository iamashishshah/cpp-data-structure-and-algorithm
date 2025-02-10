// default constructor: it is called when you just create an instance
#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public: 
        int servings = 0;
        string teaName;
        vector<string> ingredients;

        Chai(){
            teaName = "Unknown tea";
            servings = 0;
            cout << "Default constructor has called" << endl;
        }
    
        void displayTea(){
            // teaName = "Show off tea";  this is problematic because I have set another but this fn is modifying it
            cout << "Tea name: " << teaName << endl;
            cout << "No of people it is serving: " << servings << endl;
            cout << "Ingredients list: " << endl;
            for(string ingredient: ingredients){
                cout << ingredient << "\t";
            }
            cout << endl;
        }
};

int main(){
    Chai chai;
    chai.displayTea();
    cout << endl;
    return 0;
}