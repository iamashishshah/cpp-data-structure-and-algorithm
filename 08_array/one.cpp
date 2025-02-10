#include<iostream>
using namespace std;

int totalChaiServed (int chai[], int lenth){
    int total = 0;
    // cout << sizeof(chai);
    for (int i = 0; i < lenth; i++)
    {
        total += chai[i];
    }
    return total;
}

int main(){
    int numberOfDays;
    cout << "Enter the number of days to count served chais: ";
    cin >> numberOfDays;

    int* chaiServed = new int[numberOfDays];
    cout << "Enter the chai numbers served in each day for " << numberOfDays << ": \n";

    for (int i = 0; i < numberOfDays; i++){
        cin >> chaiServed[i];
    }

    int total = totalChaiServed(chaiServed, numberOfDays);
    cout << "Total served chai in 5 Days is: " << total << endl;

    delete[] chaiServed;
    return 0;
}