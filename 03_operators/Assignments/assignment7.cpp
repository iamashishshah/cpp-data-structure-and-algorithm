// Challenge 3: Relational and Logical Operators
// A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. Write a program that checks if the user qualifies for a discount based on their input.

#include <iostream>
using namespace std;

int main(){
    int numberOfCups;
    cout<< "Enter the number of cups: ";
    cin>> numberOfCups;
    cout<< "Enter the year you're member since: ";
    int userMemberYear, currentYear = 2025;
    cin>> userMemberYear;

    if(numberOfCups > 12 || currentYear - userMemberYear >= 1){
        cout<< "You're qualified for the discount today!"<<endl;
    }else{
        cout<< "Sorry! Better luck next time."<<endl;
    }
    return 0;
}
