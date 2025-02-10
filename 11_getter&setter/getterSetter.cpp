#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
        int servings;
        string teaName;
        vector<string> ingredients;

    public:
        Chai(){
            teaName = "Unknown tea";
            servings = 1;
            ingredients = {"water", "tea leaves"};
        }

        Chai(int serve, string name, vector<string> ingre){
            servings = serve;
            teaName = name;
            ingredients = ingre;
        }


        string getTeaName(){
            return teaName;
        }
        void setTeaName(string name){
            teaName = name;
        }


        int getServings(){
            return servings + 3;
        }
        void setServigns(int serve){
            servings = serve + 4;
        }


        vector<string> getIngredients(){
            return ingredients;
        }
        void setIngredients(vector<string> ingre){
            ingredients = ingre;
        }
};


int main(){
    
    Chai chai;
    vector<string> ing = chai.getIngredients();
    for(string one: ing){
        cout << one << "\t";
    }
    

    cout << endl;
    return 0;
}