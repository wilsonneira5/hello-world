// Exercise 3.10 (Invoice Class)
// Created by wilson.neira on 2/13/2020.
//

#ifndef EXERCISES_CHAP3_INVOICE_H
#define EXERCISES_CHAP3_INVOICE_H
#include <string>

class Invoice {
public:

    // Invoice constructor with four parameters
    Invoice(std::string partNumber, std::string partDescription, int quantityItem, int priceItem)
            : pNumber{partNumber}
     {

        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0

        pDescription = partDescription;
        qItem = quantityItem;
        pItem = priceItem;

    }


    std::string getNumber() const {
        return pNumber;
    }

    std::string getDescription() const {
        return pDescription;
    }
    int getQuantity() const {
        return qItem;
    }
    int getPrice() const {
        return pItem;
    }


    void setNumber(std::string numSet) {
        pNumber = numSet;
    }
    void setDescription(std::string descSet) {
        pDescription = descSet;
    }
    void setQuantity(int quantSet) {
        qItem = quantSet;
    }
    void setPrice(int priceSet) {
        pItem = priceSet;
    }

    int getInvoiceAmount()
    {
        if(qItem<=0) {
            qItem = 0;
        }
        if(pItem<=0) {
            pItem = 0;
        }
        int invoiceAmount = qItem * pItem;
        return(invoiceAmount);
    }


private:
    std::string pNumber;
    std::string pDescription;
    int qItem;
    int pItem;
}; // end class Account




#endif //EXERCISES_CHAP3_INVOICE_H
