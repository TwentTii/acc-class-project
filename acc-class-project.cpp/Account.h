/******************************************************************************

John Jackson III, 3/9/21, Definition of the Account class

*******************************************************************************/
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Account
{
    public:
        //Account constructor with two parameters
        Account (string accountName, double initialBalance)
            : name {accountName} // assigning account name to data member name
            {
                // validation
                //initialBalance is greater than zero
                //if it's not greater than zero, it is assigned zero
                
                if (initialBalance > 0)
                {
                 balance = initialBalance;
                }
            }
            
        // function that deposits (adds) only a valid amount to a balance
        void deposit(double depositAmount)
        {
            if (depositAmount > 0)
            {
                balance += depositAmount;
            }
        }
        // function that withdraws (subtracts) only a valid amount to a balance
        void withdrawal(double withdrawalAmount)
        {
            if (withdrawalAmount > 0)
            {
                balance -= withdrawalAmount;
            }
        }
        // function that returns the account balance
        double getBalance() const
        {
            return balance;
        }
        // function that sets the name
        void setName(string accountName)
        {
            name = accountName;
        }
        // function that returns the name
        string getName() const 
        {
            return name;
        }

    private:
        string name; //account name --> data member
        double balance {0};
};
