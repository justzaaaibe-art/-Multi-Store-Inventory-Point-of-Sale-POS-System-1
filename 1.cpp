#include <iostream>
#include <string>
using namespace std;
class SalesAnalytics {
private:
    double totalRevenue, totalCost;
    int totalUnits, transactions;
public:
    SalesAnalytics() {
        totalRevenue = 0; totalCost = 0; totalUnits = 0; transactions = 0;
    }
    void recordSale(double revenue, double cost, int units) {
        if (revenue < 0 || cost < 0 || units <= 0) return;
        totalRevenue += revenue;
        totalCost += cost;
        totalUnits += units;
        transactions++;
    }
    double getProfit() { return totalRevenue - totalCost; }
    void showReport() {
        cout << "\n========== DAILY SALES REPORT ==========" << endl;
        cout << "Total transactions: " << transactions << endl;
        cout << "Units sold: " << totalUnits << endl;
        cout << "Total revenue: " << totalRevenue << endl;
        cout << "Total cost: " << totalCost << endl;
        cout << "Gross profit: " << getProfit() << endl;
        if (totalRevenue > 0)
            cout << "Profit margin: " << (getProfit() / totalRevenue) * 100 << "%" << endl;
        else cout << "Profit margin: 0%" << endl;
        cout << "========================================" << endl;
    }
};

