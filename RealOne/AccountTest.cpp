// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
// Done by Wilson Neira.
#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50,0.1};
    Account account2{"John Blue", -7,0.1};

    // display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();
///////////////////Copy///////////////////////////////////////////
/////////////////Deposit/////////////////////////////////////////
    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance";
    account1.deposit(depositAmount); // add to account1's balance
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount); // add to account2 balance

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;


    //////////////Withdraw///////////////////////////////
    cout << "\n\nEnter withdraw amount from account1: "; // prompt
    int withdrawAmount;
    cin >> withdrawAmount; // obtain user input
    cout << "withdrawing " << withdrawAmount << " to account1 balance";
    account1.withdraw(withdrawAmount); // add to account1's balance

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();

    cout << "\n\nEnter withdraw amount from account2: "; // prompt
    cin >> withdrawAmount; // obtain user input
    cout << "withdrawing " << withdrawAmount << " to account2 balance";
    account2.withdraw(withdrawAmount); // add to account2 balance

    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl<<endl;


    /// apply interest
    account1.interestFunc("account 1");
    account2.interestFunc("account 2");

    // display balances
    cout << "\naccount1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;

}

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
