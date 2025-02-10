#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
    string flavor;

protected:
    float price;

public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // constructor
    Chai(string flavor, float price, string name, int serve, vector<string> ingre) : flavor(flavor), price(price), teaName(name), servings(serve), ingredients(ingre)
    {
        cout << "Constructor has called.\n";
    }

    void display() const
    {
        cout << "Favor name: " << flavor << endl;
        cout << "Price of Tea: " << price << endl;
        cout << "Tea name: " << teaName << endl;
        cout << "Servings people: " << servings << endl;
        cout << "Ingredients: \n";
        for (string ingredient : ingredients)
        {
            cout << ingredient << "\t";
        }
    }

    friend class ChaiTea;
    friend void namee(const Chai &, const Chai & );
};

void namee(const Chai &one, Chai &two)
{
    // two.teaName = "Mint tea";
    cout << "Tea name from friend function: " << one.teaName << endl;
    cout << "Tea name from friend function: " << two.teaName << endl;
}

class ChaiTea
{
private:
    string process[3] = {"Water with salt", "Lemon with honey", "Garlic paste"};

public:
    void display(const Chai &chai) const
    {
        cout << chai.price << " Lemon tea price from friend class" << endl;
    }

    ChaiTea(){
        cout << "Chai tea class constructor called." << endl;
    }
};

int main()
{
    Chai lemonChai("Mint", 45.3, "lemon tea", 5, {"lemon", "water", "salt"});
    ChaiTea mintTea;
    // mintTea.display(lemonChai);
    namee(lemonChai, lemonChai);
    cout << endl;
    return 0;
}