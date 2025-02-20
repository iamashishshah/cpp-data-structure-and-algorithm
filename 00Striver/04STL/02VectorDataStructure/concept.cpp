#include<iostream>
#include<vector>

using namespace std;

int main(){

    int array[4] = {3, 5, 32, 55};
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        // cout << array[i] << "\t";
    }

    //storing pair in vector data type
    vector<pair<int, int>> one;
    one.push_back({3, 5});
    one.push_back({33, 52});
    one.emplace_back(433, 75);
    // cout << one[0].first << endl;

    //pre-define values in vector
    vector<int> onee(14, 10);
    for(int i = 0; i < onee.size(); i++){
        // cout << onee[i] << "\t" ;
    }

    // copy of one vector into another
    vector<int> two(4, 13);
    vector<int> three(two);
    cout << "Values of target after copying data: " << endl;
    for(int i = 0; i < three.size(); i++){
        // cout << three[i] << "\t";
    }
    cout << endl;
    three[0] = 24320;
    // shallow copy or deep copy
    cout << "Value of parent after modifying content in target: " << endl;
    for(int i = 0; i < three.size(); i++){
        // cout << three[i] << "\t";
    }
    cout << endl;
    cout << "Final target values: " << endl;
    for(int i = 0; i < three.size(); i++){
        // cout << two[i] << "\t";
    }
    cout << endl;


    // vector shallow copy vs deep copy:   deep copy✅
    cout << "Vector: " << endl;
    vector<int> five = {3, 5, 6};
    five[0] = 80;
    for(int i = 0; i < five.size(); i++){
        // cout << five[i] << "\t";
    }
    cout << endl;
    vector<int> six(five);
    six[0] = 50;
    six[1] = 34342;
    six[2] = 8321;
    for(int i = 0; i < five.size(); i++){
        // cout << five[i] << "\t";
    }
    cout << endl;
    for(int i = 0; i < five.size(); i++){
        // cout << six[i] << "\t";
    }


    // iterator concept
    vector<int> seven = {2, 5, 32, 6};
    // cout << "Enter vector values: ";
    // for(int i = 0; i < 4; i++){
    //     cin >> seven[i];
    // }
    // what iterator does it, it takes the memory location of first element of vector and then to move right or left, just do increament operator

    vector<int>::iterator iter = seven.begin();
    // iter++;
    // cout << *(iter);

    // print values using iterator
    for(int i = 0; i < seven.size(); i++){
        cout << *(iter) << "\t";
        iter++;
    }

    // take values from user in vector array:
    vector<int> eight(5);
    cout << "Enter values: ";
    for(int i = 0; i < 2; i++){
        cin >> eight[i];
    }
    cout << "Output values: ";
    for(int i = 0; i < 2; i++){
        cout << eight[i] << "\t";
    }
    return 0;
}