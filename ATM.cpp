// C++ program to implement the ATM
// Management System
#include <iostream>
using namespace std;
class Bank {
 
public:
double balance=500;
    // Function to display the balance data
    void Balance()
    {
        
        cout << "Balance is:" << balance << "Rs"<< endl;
        
    }
 
    // Function to deposit the amount in ATM
    void deposit()
    {
        cout << "\nEnter amount to be Deposited\n";
        double depositAmount;
        cin >> depositAmount;
        balance += depositAmount;
    }
 
    // Function to withdraw the amount in ATM
    void withdraw()
    {
        cout << "\n Withdraw amount\n";
        double withdrawAmount;
        cin >> withdrawAmount;
        Bank (); {
        if ( withdrawAmount <= balance )
        balance -= withdrawAmount;
        else 
        cout << "Insufficient funds available" << endl; }
    }
    
    void exit()
    {
        cout << "Exit" << endl;
    }
};
 

int main()
{
    // Object of class
    Bank b;
 
    int choice;
 
    // Infinite while loop to choose
    // options everytime
    while (1) {
        cout <<"*******WELCOME*******"<<endl;
        cout << "1. Balance Enquiry\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Exit\n";
        cout << "*********************"<<endl;
        cin >> choice;
 
        // Choices to select from
        switch (choice) {
        case 1:
            b.Balance();
            break;
        case 2:
            b.deposit();
            break;
        case 3:
            b.withdraw();
            break;
        case 4:
            b.exit();
            break;
        default:
            cout << "\nInvalid choice\n";
        }
    }
}