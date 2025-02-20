#include <iostream>
#include <string>
#include <utility>
#include <tuple>
#include<vector>
#include <tuple>


using namespace std;

void explainPair(){
    pair<string, int> person = {"Ashish ", 21};
    cout << person.first << endl;

    pair<int, int> number(3, 5);
    cout << number.first << " " << number.second << endl;

    pair<int, double> one;
    cout << one.first << " " << one.second << endl;


    // vector<int> age = {21, 43, 56, 63};
    // cout << age[2];

    // try with different data types
    pair<vector<int>, int> One = {{1, 2, 4, 5}, 21};
    cout << One.first[3] << endl;

    //vector ka pair
    pair<vector<string>, vector<int>> Two = {{"Ashish", "Abhay", "Deepak"}, {2, 3, 5, 5}};
    cout << Two.first[2] << endl;


    // swap function
    pair<int, int> Three = {43, 44};
    pair<int, int> Four = {65, 66};
    Three.swap(Four);
    cout << Three.first << " " << Four.second << endl;

    // make_pair function
    pair<string, int> two;
    // two.first = "Ashish Shah";
    // two.second = 21;

    // or we can do like this
    two = make_pair("Ashish Shah", 21);
    cout << two.first << ", age: " << two.second << endl;

    
    //tie function
    // pair<string*, int*> Five;
    // string name = "Ashish Shah";
    // int age = 21;
    // tie(name&, age&) = Five;
    // cout << Five.first << " " << Five.second << endl;
    
}

int main(){
    explainPair();
    return 0;
}