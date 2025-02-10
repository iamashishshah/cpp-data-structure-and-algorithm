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

    // how to define custom copy constructor

    Chai(const Chai& other){
        servings = other.servings;
        teaName = new string(*other.teaName);
        // teaName = other.teaName;  // here is the mistake, if we're doing this then what?(then there is not point of writing custom constructor again because it is also doing the same job as default by compiler)

        // but we want to assign new memory to the dynamically allocated member
        // we can have two types of assingment
        ingredients = other.ingredients;

        // other.servings = 10;
    }

    ~Chai()
    {
        delete teaName;
        cout << teaName << " Memory is free now." << endl;
    }

public:
    int servings;
    string *teaName;
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
    Chai copiedTea = lemonTea;
    *copiedTea.teaName = "Modified lemon tea.";
    *lemonTea.teaName = "Masala tea.";
    copiedTea.display();
    lemonTea.display();

    cout << endl;
    return 0;
}