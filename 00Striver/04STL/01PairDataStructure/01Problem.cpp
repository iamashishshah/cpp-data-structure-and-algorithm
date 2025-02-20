/*
a. Create a pair where the first element is a string and the second element is a float.
b. Swap the two pairs pair<int, int> p1 = {10, 20}; and pair<int, int> p2 = {30, 40};.
c. Write a function to return a pair that represents the sum and product of two numbers.
*/

#include <iostream>
#include <string>
#include <utility>
#include <tuple>
#include<vector>
#include <tuple>


using namespace std;

// return pair
pair<int, int> returnPair(pair<int, int> one, pair<int, int> two){
    return {one.first+one.second, two.first*two.second};
}

int main(){
    pair<string, float> person = {"Ashish Shah", 34};
    cout << person.first << " " << person.second << endl;

    pair<int, int> One;
    One = make_pair(10, 4);

    pair<int, int> Two;
    Two = make_pair(10, 21);

    One.swap(Two);
    
    cout << One.first << " " << One.second << endl;
    cout << Two.first << " " << Two.second << endl;

    pair<int, int> result = returnPair(One, Two);
    cout << result.first << " " << result.second << endl;
    return 0;
}