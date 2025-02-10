#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    Chai(string name, int servingss, vector<string> ingr)
    {
        servings = servingss;
        teaName = new string(name);
        ingredients = ingr;
    }

    // how to define copy constructor

    ~Chai(){
        delete teaName;
        cout << teaName << " Memory is free now." << endl;
    }

public:
    int servings;
    string* teaName;
    vector<string> ingredients;

    void display()
    {
        cout << "Tea name: " << *teaName << endl;
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
    // lemonTea.display();

    Chai copiedTea = lemonTea;
    // copiedTea.display();

    cout << "Original tea " << lemonTea.teaName << endl;
    cout << "copiedTea tea " << copiedTea.teaName << endl;

    *copiedTea.teaName = "Modified lemon tea.";
    *lemonTea.teaName = "Masala tea.";
    copiedTea.display();
    lemonTea.display();

    cout << "Memory free iske baad hua or pehle?" << endl;


    cout << endl;
    return 0;
}