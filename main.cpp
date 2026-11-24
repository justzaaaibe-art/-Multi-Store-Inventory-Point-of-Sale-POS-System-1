#include "Product.h"
#include "Bill.h"
#include "PurchaseOrder.h"
#include "Payment.h"
#include "SalesReport.h"
#include<iostream>
using namespace std;

int main() {
    cout << "=========================================\n";
    cout << "       RETAIL MANAGEMENT SYSTEM          \n";
    cout << "=========================================\n\n";

    // --- 1. Product & Inventory (Member 1) ---
    int pId, pStock, newStock;
    string pName;
    cout << "[1] PRODUCT & INVENTORY\n";
    cout << "Enter Product ID: ";
    cin >> pId;
    cout << "Enter Product Name (one word): ";
    cin >> pName;
    cout << "Enter Initial Stock: ";
    cin >> pStock;

    Product p1(pId, pName, pStock);
    cout << "Enter Updated Stock: ";
    cin >> newStock;
    p1.setStock(newStock);

    cout << "-> Saved: " << p1.getName() << " (ID: " << p1.getId() 
         << ") | Stock: " << p1.getStock() << "\n\n";


    // --- 2. Billing & Checkout (Member 2) ---
    int bId;
    double bAmt, bTax, newAmt;
    cout << "[2] BILLING & CHECKOUT\n";
    cout << "Enter Bill ID: ";
    cin >> bId;
    cout << "Enter Amount: ";
    cin >> bAmt;
    cout << "Enter Tax: ";
    cin >> bTax;

    Bill b1(bId, bAmt, bTax);
    cout << "Enter Updated Amount: ";
    cin >> newAmt;
    b1.setAmount(newAmt);

    cout << "-> Saved: Bill #" << b1.getBillId() 
         << " | Final Total: $" << b1.getFinalTotal() << "\n\n";


    // --- 3. Supplier & PO (Member 3) ---
    int poNum, poQty, newQty;
    string supName;
    cout << "[3] SUPPLIER & PURCHASE ORDER\n";
    cout << "Enter PO Number: ";
    cin >> poNum;
    cout << "Enter Supplier Name (one word): ";
    cin >> supName;
    cout << "Enter Order Quantity: ";
    cin >> poQty;

    PurchaseOrder po1(poNum, supName, poQty);
    cout << "Enter Updated Quantity: ";
    cin >> newQty;
    po1.setOrderQty(newQty);

    cout << "-> Saved: PO #" << po1.getPoNumber() << " | Supplier: " << po1.getSupplierName() 
         << " | Qty: " << po1.getOrderQty() << "\n\n";


    // --- 4. Payment Gateway (Member 4) ---
    int tId;
    string payMethod, payStatus, newStatus;
    cout << "[4] PAYMENT GATEWAY\n";
    cout << "Enter Transaction ID: ";
    cin >> tId;
    cout << "Enter Method (Cash/Card): ";
    cin >> payMethod;
    cout << "Enter Initial Status (Pending/Approved): ";
    cin >> payStatus;

    Payment pay1(tId, payMethod, payStatus);
    cout << "Enter Updated Status: ";
    cin >> newStatus;
    pay1.setStatus(newStatus);

    cout << "-> Saved: Txn #" << pay1.getTransactionId() << " (" << pay1.getMethod() 
         << ") | Status: " << pay1.getStatus() << "\n\n";


    // --- 5. Sales Analytics (Member 5) ---
    int soldItems, newItems;
    double rev, newRev;
    cout << "[5] SALES ANALYTICS\n";
    cout << "Enter Total Items Sold: ";
    cin >> soldItems;
    cout << "Enter Total Revenue: ";
    cin >> rev;

    SalesReport report(soldItems, rev);
    cout << "Enter Updated Items Sold: ";
    cin >> newItems;
    cout << "Enter Updated Revenue: ";
    cin >> newRev;
    report.setSales(newItems, newRev);

    cout << "-> Saved: Items Sold: " << report.getTotalItemsSold() 
         << " | Revenue: $" << report.getTotalRevenue() << "\n\n";


    cout << "=========================================\n";
    cout << "     CLOSING SYSTEM (DESTRUCTORS)        \n";
    cout << "=========================================\n";
    return 0;
}
