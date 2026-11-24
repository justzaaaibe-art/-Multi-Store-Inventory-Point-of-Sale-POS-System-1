#ifndef PURCHASEORDER_H
#define PURCHASEORDER_H

#include <iostream>
#include <string>
using namespace std;

class PurchaseOrder {
private:
    int poNumber;
    string supplierName;
    int orderQty;

public:
    PurchaseOrder(int po, string name, int qty) {
        poNumber = po;
        supplierName = name;
        orderQty = qty;
    }

    ~PurchaseOrder() {
        cout << "Purchase Order closed.\n";
    }

    void setOrderQty(int qty) { orderQty = qty; }

    int getPoNumber() { return poNumber; }
    string getSupplierName() { return supplierName; }
    int getOrderQty() { return orderQty; }
};

#endif
