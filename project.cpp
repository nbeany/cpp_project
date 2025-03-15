#include <iostream>
#include <iomanip>
using namespace std;

// Preprocessor constant
#define TAX_RATE 0.15

int main() {
    // Display introductory message
    cout << "Welcome to the Product Sales and Inventory Analysis Program!\n";
    cout << "This program helps analyze product sales and inventory levels.\n";
    cout << "Reminder: C++ is a compiled language.\n\n";
    
    // Declare variables for product details
    string productName;
    int productCategory;
    int initialInventory;
    float productPrice;
    int itemsSold;
    
    // Declare variables for computed values
    int newInventory;
    float totalSales;
    string inventoryStatus;
    
    // Define constants
    const float TAX_RATE_CONST = 0.15;
    
    // User input
    cout << "Enter product name (single word): ";
    cin >> productName;
    cout << "Enter product category (1-5): ";
    cin >> productCategory;
    cout << "Enter initial inventory quantity: ";
    cin >> initialInventory;
    cout << "Enter product price per unit: ";
    cin >> productPrice;
    cout << "Enter number of items sold: ";
    cin >> itemsSold;
    
    // Perform calculations
    newInventory = initialInventory - itemsSold;
    totalSales = itemsSold * productPrice;
    
    // Use ternary operator for inventory status
    inventoryStatus = (newInventory < 10) ? "Low Inventory" : "Sufficient Inventory";
    
    // Type deduction with auto and decltype
    auto salesCopy = totalSales;
    decltype(initialInventory) extraInventory = 100;
    
    // Validate product category
    if (productCategory < 1 || productCategory > 5) {
        cout << "Invalid product category!\n";
    } else {
        // Switch statement for category message
        switch (productCategory) {
            case 1: cout << "Category 1: Electronics\n"; break;
            case 2: cout << "Category 2: Groceries\n"; break;
            case 3: cout << "Category 3: Clothing\n"; break;
            case 4: cout << "Category 4: Stationery\n"; break;
            case 5: cout << "Category 5: Miscellaneous\n"; break;
        }
    }
    
    // Simulate receipt printing
    cout << "\nReceipt:\n";
    for (int i = 1; i <= itemsSold; i++) {
        cout << "Item " << i << " - Price: $" << fixed << setprecision(2) << productPrice << endl;
    }
    
    // Output all information
    cout << "\nSummary:\n";
    cout << "Product Name: " << productName << endl;
    cout << "Category: " << productCategory << endl;
    cout << "Initial Inventory: " << initialInventory << endl;
    cout << "Price per Unit: $" << fixed << setprecision(2) << productPrice << endl;
    cout << "Items Sold: " << itemsSold << endl;
    cout << "New Inventory: " << newInventory << endl;
    cout << "Total Sales Amount: $" << totalSales << endl;
    cout << "Inventory Status: " << inventoryStatus << endl;
    cout << "Tax Rate (Preprocessor): " << TAX_RATE << endl;
    cout << "Tax Rate (Const): " << TAX_RATE_CONST << endl;
    cout << "Sales Copy (auto): " << salesCopy << endl;
    cout << "Extra Inventory (decltype): " << extraInventory << endl;
    
    return 0;
}
