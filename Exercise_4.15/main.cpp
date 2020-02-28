#include <iostream>

int main() {

    double dollarSales{0}, receiveTotal{0};

    while(dollarSales != -1)
    {

        std::cout << "\nEnter sales in dollars (-1 to end): " << std::endl;
        std::cin >> dollarSales;
        if (dollarSales == -1)
        {
            break;
        }
        receiveTotal = 200 + (0.09 * dollarSales);
        std::cout.precision(2);
        std::cout << "Salary is: $" << std::fixed <<receiveTotal <<std::endl;
    }
    return 0;
}