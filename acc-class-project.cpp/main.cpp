/**************************************

Create and manipulate Account objects.

**************************************/
#include <iomanip>
#include <iostream>
#include "Account.h"

using namespace std;

void ClearScreen();
// main function begins program execution
int main()
{
    cout << setprecision(2) <<  fixed << endl;
    
    Account account1{"John J.", 50};
    Account account2{"Joe M.", -10};
    
    cout << "account 1 owned by : " << account1.getName();
    cout << " your current balance is : $" << account1.getBalance();
    cout << "\n\n";
    cout << "account 2 owned by : " << account2.getName();
    cout << " your current balance is : $" << account2.getBalance();
    cout << "\n\n";

    //adding to the balance for account 1 and displaying
    cout << "Enter a deposit amount for account 1: ";
    double depositAmount;
    cin >> depositAmount;
    //inform customer you are adding that amount to their balance
    cout << "adding $" << depositAmount << " to account 1 balance.\n";
    //here is where the deposit gets added to the balance
    account1.deposit(depositAmount);

    //adding to the balance for account 2 and displaying
    cout << "Enter a deposit amount for account 2: ";
    cin >> depositAmount;
    //inform customer you are adding that amount to their balance
    cout << "adding $" << depositAmount << " to account 2 balance.\n";
    //here is where the deposit gets added to the balance
    account2.deposit(depositAmount);

    //displaying balances
    cout << "\n\n";
    cout << "account 1 owned by: " << account1.getName() << " your balance $" << account1.getBalance();
    cout << "\n";
    cout << "account 2 owned by: " << account2.getName() << " your balance $" << account2.getBalance();
    cout << "\n\n";
    
    double withdrawlAmount;
    
    cout << "Enter a withdrawl amount for account 1 : ";
    cin >> withdrawlAmount;
    cout << "Subtracting $" << withdrawlAmount << " from account1 balance.\n";
    account1.withdrawal(withdrawlAmount);
    cout << "\n";
    
    cout << "Enter a withdrawl amount for account 2 : ";
    cin >> withdrawlAmount;
    cout << "Subtracting $" << withdrawlAmount << " from account2 balance.\n";
    account2.withdrawal(withdrawlAmount);
    cout << "\n\n";
    
    //displaying final balances
    //bonus challenge : clear the screen before this output
    
    ClearScreen();
    cout << "account 1 owned by : " << account1.getName() << " your new balance is : $" << account1.getBalance();
    cout << "\n";
    cout << "account 2 owned by : " << account2.getName() << " your new balance is : $" << account2.getBalance();
    cout << "\n";
    
    return 0;
}

void ClearScreen()
{
cout << string( 100, '\n' );
}





