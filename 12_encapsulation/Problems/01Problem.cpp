/*
Problem:
Design a BankAccount class with private attributes such as accountNumber, balance, and accountHolderName. Create public getter and setter functions for each attribute. Implement deposit and withdrawal methods, ensuring that withdrawals cannot exceed the available balance.

Hints:

Make sure balance cannot be directly accessed and can only be modified via methods.
Provide methods for deposit and withdrawal operations that ensure proper validation of amounts
*/

#include<iostream>
#include<vector>

using namespace std;

class BankAccount{
    private:
        int accountNumber;
        double balance;
        string accountHolderName;
    
    public:
    
        BankAccount(const int accNum, const string name, const double bal): accountNumber(accNum), balance(bal), accountHolderName(name){}

        // getter & setter for each attribute
        int getAccountNumber() const{
            return accountNumber;
        }
        void setAccountNumber(const int accNum){
            this -> accountNumber = accNum;
        }

        string getAccountHolderName() const {
            return accountHolderName;
        }
        void setAccountHolderName(const string name) {
            this -> accountHolderName = name;
        }

        double getBalance() const {
            return balance;
        }
        void setBalance(const double bal){
            this -> balance = bal;
        }

        // deposit method
        void depositAmount(const int accNum, const double amount){
            if(this -> accountNumber == accNum && amount > 0){
                balance += amount;
                cout << "Your deposited amount is: " << amount << endl;
            }else{
                cout << "Either account number wrong or Invalid ammount." << endl;
            }
        }

        // withdraw method
        double withdrawAmount(const int accNum, const double amount){
            if(this -> accountNumber == accNum && amount > 0 && amount <= this -> balance){
                balance -= amount;
                cout << "Your withdrawn amount is: " << amount << endl;
                cout << "Balance: " << this -> balance << endl;
            }else{
                cout << "Either account number wrong or Invalid ammount." << endl;
            }
            
        }

};

int main(){
    BankAccount userOne(12345678, "Ashish Shah", 4000.56);
    printf("Account number: %d\n", userOne.getAccountNumber());
    printf("Balance: %.1lf\n", userOne.getBalance());
    printf("Account holder name: %s\n", userOne.getAccountHolderName().c_str());

    userOne.depositAmount(12345678, 300);
    cout << endl;
    return 0;
}