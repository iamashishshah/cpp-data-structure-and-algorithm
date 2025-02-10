#include<iostream>
#include<string>
using namespace std;
void displayIngredients(string*, int);

string* prepareChaiOrders(int cups){
    cin.ignore(); // Clear any remaining newline character in the buffer before starting the loop
    string* chai = new string[cups];
    cout << "Enter ingredients as many there is cups: " << cups << endl;
    for (int i = 0; i < cups; i++){
        getline(cin, *(chai + i));
    }

    return chai;
}
int main(){
    cout << "Enter number of cups: ";
    int cups;
    cin >> cups;
    string* chai = prepareChaiOrders(cups);
    displayIngredients(chai, cups);
    
    delete[] chai;
    return 0;
}

void displayIngredients(string* chai, int cups){
    cout << "Chai ingredients: " << endl;
    for (int i = 0; i < cups; i++){
        cout << *(chai + i) << "\t";
    }
    
}