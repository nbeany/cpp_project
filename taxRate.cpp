#include <iostream>
#include <vector>
#define taxRate 0.15

using namespace std;

const float taxRateConstant = 0.15;

int main() {
    cout << "Welcome to the Product Sales and Inventory Analysis Program!\n";
    cout << "This program helps analyze product sales and inventory levels.\n";
    cout << "Reminder: C++ is a compiled language.\n\n";
    string productName;
    int productCategory;
    int inventoryQuantity;
    float pricePerUnit;
    int itemsSold;
    cout<<"Product Categories:\n1 - Electronics\n2 - Groceries\n3 - Clothing\n4 - Stationery\n5 - Miscellaneous\n";
    cout << "Enter the product name: ";
    cin >> productName;
    cout << "Enter the product category: ";
    cin >> productCategory;
    cout << "Enter the initial inventory quantity: ";
    cin >> inventoryQuantity;
    cout << "Enter the product price per unit: ";
    cin >> pricePerUnit;
    cout << "Enter the number of items sold: ";
    cin >> itemsSold;

    string category;

    switch (productCategory) {
        case 1: category = "Electronics"; break;
        case 2: category = "Groceries"; break;
        case 3: category = "Clothing"; break;
        case 4: category = "Stationery"; break;
        case 5: category = "Miscellaneous"; break;
        default: category = "CHOICE OUT OF RANGE!"; break;
    }

    int remainingInventory = inventoryQuantity - itemsSold;
    float totalSales = itemsSold * pricePerUnit;
    string inventoryStatus;

    auto salesCopy = totalSales;
    decltype(inventoryQuantity) inventoryCopy = inventoryQuantity;

    if (remainingInventory < 10) {
        inventoryStatus = "LOW INVENTORY";
    } else {
        inventoryStatus = "SUFFICIENT INVENTORY";
    }

    cout << "Product Name: " << productName << "\n";
    cout << "Product Category: " << category << "\n";
    cout << "Initial Inventory Quantity: " << inventoryQuantity << "\n";
    cout << "Price per Unit: $" << pricePerUnit << "\n";
    cout << "Number of items sold: " << itemsSold << "\n";
    cout << "New Inventory: " << remainingInventory << "\n";
    cout << "Total Sales Amount: $" << totalSales << "\n";
    cout << "Inventory Status: " << inventoryStatus << "\n";
    cout << "Total Sales Amount (Copy using `auto`): $" << salesCopy << "\n";
    cout << "Initial Inventory (Using `decltype`): " << inventoryCopy << "\n";
    
    cout << "RECEIPT ---\n";
    for (int i = 1; i <= itemsSold; i++) {
        cout << "ITEM " << i << ": $" << pricePerUnit << "\n";
    }

    cout << "Tax Rate: " << taxRateConstant << "%\n";
    cout << "Total after tax: $" << salesCopy + (salesCopy * taxRate) << "\n";

    return 0;
}
