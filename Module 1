#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    int stock;

public:
    Product(int i, string n, int s) {
        id = i;
        name = n;
        stock = s;
    }

    ~Product() {
        cout << "Product record closed.\n";
    }

    void setStock(int s) { stock = s; }

    int getId() { return id; }
    string getName() { return name; }
    int getStock() { return stock; }
};
