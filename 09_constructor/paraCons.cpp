#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    Chai(string name, int servingss, vector<string> ingr)
    {
        servings = servingss;
        teaName = name;
        ingredients = ingr;
        cout << "params constructor called" << endl;
    }

public : 
    int servings;
    string teaName;
    vector<string> ingredients;

    void display()
    {
        cout << "Tea name: " << teaName << endl;
        cout << "People servings: " << servings << endl;
        cout << "Ingredients: \n";
        for (string ingredient : ingredients)
        {
            cout << ingredient << "\t";
        }
        cout << endl;
    }
};

int main()
{
    Chai lemonTea("Lemon tea", 4, {"Water", "Lemon", "Honey"});
    lemonTea.display();
    return 0;
}