/*
Create a class Product that represents an item in a store.The class should have :
    A string name,
    A double price(default to 100.0 if not provided),
    A double discount(default to 5.0 if not provided, must be in range 0 - 50).Use constructor delegation to initialize these attributes.

    Tasks : Create an object with only the name,
    then name and price, then all three.Print their values.
*/

#include<iostream>
#include<vector>

using namespace std;

class Product{
    
    public:
        string name;
        double price;
        double discount;

        Product(){
            price = 100.0;
            discount = 5.0;
        }

        Product(string name): Product(){
            this -> name = name;
        }

        Product(string name, double price): Product(name){
            this -> price = price;
        }

        Product(string name, double price, double discount) : Product(name, price)
        {
            this -> discount = discount;
        }
};

int main(){
    Product product("Cream", 20.4, 45.3);
    cout << product.name << endl;
    cout << product.price << endl;
    cout << product.discount << endl;

    cout << endl;
    return 0;
}