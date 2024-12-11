#include <iostream>
#include <iomanip>
using namespace std;

class Food {
private:
    string product_code;    // stores the product code
    string product_type;    // stores the product type
    string product_name;    // stores the product name
    double product_price;   // stores the product price

public:
    // Constructor to initialize the instance variables
    Food(string product_code, string product_type, string product_name, double product_price) {
        this->product_code = product_code;   // using 'this' pointer
        this->product_type = product_type;   // using 'this' pointer
        this->product_name = product_name;   // using 'this' pointer
        this->product_price = product_price; // using 'this' pointer
    }

    // Method to reduce the price by 5% for selective items
    void discount() {
        this->product_price -= this->product_price * 0.05;
    }

    // Method to display the food product information
    void display() const {
        cout << "Product Code: " << this->product_code << endl;
        cout << "Product Type: " << this->product_type << endl;
        cout << "Product Name: " << this->product_name << endl;
        cout << "Product Price: $" << fixed << setprecision(2) << this->product_price << endl;
    }
};

int main() {
    const int NUM_PRODUCTS = 3;  // Set the number of products

    // Array of Food objects initialized in the constructor
    Food foodItems[NUM_PRODUCTS] = {
        Food("1234", "Snack", "Chips", 10.00),
        Food("5678", "Drink", "Soda", 5.50),
        Food("9101", "Dessert", "Cake", 15.75)
    };

    // Display information before applying discount
    cout << "Before applying discount:\n";
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        cout << "Product " << i + 1 << ":\n";
        foodItems[i].display();
        cout << endl;
    }

    // Applying discount to all products
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        foodItems[i].discount();
    }

    // Display information after applying discount
    cout << "\nAfter applying discount:\n";
    for (int i = 0; i < NUM_PRODUCTS; ++i) {
        cout << "Product " << i + 1 << ":\n";
        foodItems[i].display();
        cout << endl;
    }

    return 0;
}
