#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public: 
        string teaName;
        int servings;
        vector<string> ingredients;

        void displayChaiDetails(){
            cout << "Tea name: " << teaName << endl;
            cout << "People servings: " << servings << endl;
            cout << "Ingredients: \n";
            for(string ingredient: ingredients){
                cout << ingredient << "\t";
            }
            cout << endl;
        }
    private: 
        string authorName = "Ashish shah";
    public: 
        void displayAuthorName(){
            cout << "Author name is : " << authorName;
        }
};

int main(){
    Chai chai;
    chai.teaName = "Lemon tea";
    chai.servings = 3;
    chai.ingredients = {"Water", "Sugar", "Tea leaves"};
    chai.ingredients.push_back("Milk");
    chai.ingredients.push_back("Lemon");
    chai.displayChaiDetails();
    chai.displayAuthorName();
    return 0;
}