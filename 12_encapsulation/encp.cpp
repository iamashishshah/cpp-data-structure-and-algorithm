#include<iostream>
#include<vector>
#include<stdio.h>
#include<string>

using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;

    public:
        BankAccount(string accountNumber){
            this -> accountNumber = accountNumber;
        }
        BankAccount(string accNum, double bal): BankAccount(accNum){
            this -> balance = bal;
        }

        // getter method
        double getBalance() const {
            return balance;
        }

        // getter method to get account number
        string getAccountNumber() const {
            return accountNumber;
        }

        // method to deposit money
        void depositAmount(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposited amount: " << amount << endl;
            }else{
                cout << "Invalid amount value. " << endl;
            }
        }

        // method to withdraw money
        double withdrawAmount(double amount){
            if(amount > 0 && balance >= amount){
                balance -= amount;
                cout << "Withdrawn amount: " << amount << endl;
            }else{
                cout << "Invalid operation." << endl;
            }
        }

};

int main(){
    BankAccount userOne("1BI22CS025", 5000);
    double bal = userOne.getBalance();
    cout << "Balance: " << bal << endl;

    userOne.depositAmount(300);
    bal = userOne.getBalance();
    cout << "Balance: " << bal << endl;

    userOne.withdrawAmount(400);
    bal = userOne.getBalance();
    cout << "Balance: " << bal << endl;

    cout << endl;
    return 0;
}