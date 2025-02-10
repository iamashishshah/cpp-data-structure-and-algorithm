#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public: 
        int servings;
        string teaName;
        vector<string> ingredients;
        vector<string> peopleNames;

        Chai(){
            cout << "Without parameter, default constructor called." << endl;
        }

        Chai(int serve, string name){
            cout << "With serving and teaname constructor called." << endl;
        }
        Chai(int serve, string name, vector<string> ingre){
            cout << "With serving, ingredients and teaname constructor called." << endl;
        }
        Chai(int serve, string name, vector<string> ingre, vector<string> names)
        {
            cout << "With serving, names of people, ingredients and teaname constructor called." << endl;
        }
};

int main(){
    Chai chai(3, "lemon", {"water", "Lemon"}, {"Ashish", "Ayush", "Abhay"});
    cout << endl;
    return 0;
}