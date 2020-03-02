#include <iostream>
int main() {
    int accountNumber{0} ;
    double beginningBalance{0}, totalCredits{0}, creditLimit{0}, newBalance{0}, totalCharges{0};
    while (accountNumber != -1)
    {
        std::cout << "\nEnter account number (-1 to quit): " << std::endl;
        std::cin >> accountNumber;
        if(accountNumber == -1)
        {
         break;
        }
        std::cout << "Enter beginning balance: " << std::endl;
        std::cin >> beginningBalance;

        std::cout << "Enter total charges: " << std::endl;
        std::cin >> totalCharges;

        std::cout << "Enter total credits: " << std::endl;
        std::cin >> totalCredits;

        std::cout << "Enter credit limit: " << std::endl;
        std::cin >> creditLimit;
        newBalance = beginningBalance + totalCharges - totalCredits;
        std::cout.precision(2);
        std::cout << "New balance is: " << std::fixed << newBalance << std::endl;
        if(newBalance > creditLimit)
        {
            std::cout << "Account: " << accountNumber << std::endl;

            std::cout << "Credit limit: " << std::fixed << creditLimit << std::endl;

            std::cout << "Balance: " << std::fixed << newBalance << std::endl;

            std::cout << "Credit Limit Exceeded." << std::endl;
        }
    }
    return 0;
}
