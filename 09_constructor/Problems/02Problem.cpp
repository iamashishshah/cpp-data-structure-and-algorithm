/*
Create a class BankAccount that represents a bank account.

static int accountCount to track the number of accounts created.
const int accountID, assigned uniquely based on accountCount.
double balance, default 1000.0 if not provided.
Use constructor delegation to initialize balance.

Tasks:
Create three BankAccount objects and print their accountID and balance.
Ensure accountCount increments properly
*/

#include<iostream>
#include<vector>

using namespace std;

class BankAccount{
    public:
        static int accountCount;  // shared among all the objects
        const int accountID;    // Unique per object
        double balance;

    public:
        BankAccount(double balance): balance(balance), accountID(++accountCount){}

        BankAccount(): BankAccount(5000.3){}


        void display() const{
            cout << "Account ID: " << accountID << endl;
            cout << "Balance $" << balance << endl;
        }

        static int getTotalAccountCount(){
            return accountCount;
        }


};

int main(){
    BankAccount bank(343.34);
    bank.display();
    cout << bank.balance << endl;
    cout << endl;
    return 0;
}