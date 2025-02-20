/*
a. Create an array of 5 pairs, where each pair consists of an integer and a string. Loop through the array and print the contents of each pair.
b. Sort an array of pairs based on the first element of each pair.
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    // pair<string, int> person = {"Ashish", 21};
    // pair<string, int> p[2] = {{"Ashish Shah", 21}, {"Abhay Sharma", 22}};
    // cout << p[0].first << " " << p[1].second << endl;

    pair<int, string> array[2];
    for(int i = 0; i < 2; i++){
            string first;
            cout << "Enter name of person: " << i+1 << endl;
            cin.ignore();
            getline(cin, first);
            int age;
            cout << "Enter age: " << endl;
            cin >> age;
            array[i].second = first;
            array[i].first = age;
    }
    // printing array before sorting
    for(int i = 0; i < 2; i++){
        cout << "Name: " << array[i].second << ", age: " << array[i].first << endl;
    }
    
    return 0;
}