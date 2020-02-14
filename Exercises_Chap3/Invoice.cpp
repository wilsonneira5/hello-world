// Exercise 3.10 (Invoice Class)
// Created by wilson.neira on 2/13/2020.
//

#include "Invoice.h"
#include <iostream>

using namespace std;

int main()
{
    Invoice invoice1{"0032", "wire", 1, 5};

    // display initial invoice
    cout << "invoice1: Part Number - " << invoice1.getNumber()<<endl;
    cout << "Part Description - " << invoice1.getDescription() << "\nQuamtity Item - "
         << invoice1.getQuantity() << "\nPrice Item - $" << invoice1.getPrice()<<endl;

    cout << "\n\nCustomer changed their mind, they returned this product and picked another.";
    cout << "\n\nEnter the new hardware's details.";
    cout << "\n\nPart Number: "; // prompt
    string customNumber;
    cin >> customNumber; // obtain user input
    invoice1.setNumber(customNumber);
    cout << "\nPart Description: "; // prompt
    string customDescription;
    cin >> customDescription; // obtain user input
    invoice1.setDescription(customDescription);
    cout << "\nQuantity Item: "; // prompt
    int customQuantity;
    cin >> customQuantity; // obtain user input
    invoice1.setQuantity(customQuantity);
    cout << "\nPrice Item: "; // prompt
    int customPrice;
    cin >> customPrice; // obtain user input
    invoice1.setPrice(customPrice);
    cout << "\nNew invoice1: Part Number - " << invoice1.getNumber()<<endl;
    cout << "Part Description - " << invoice1.getDescription() << "\nQuantity Item - "
         << invoice1.getQuantity() << "\nPrice Item - $" << invoice1.getPrice()<<endl<<endl;

    cout << ">>Calculating invoice amount." <<endl<<endl;

    cout << "Invoice amount: $" << invoice1.getInvoiceAmount()<<endl;
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


