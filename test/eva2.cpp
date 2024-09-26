#include <iostream>
using namespace std;
class Product {
private:
    int id;
    string name;
    double price;
    int quantity;
public:
    Product() : id(0), name(""), price(0.0), quantity(0) {}
    Product(int i, string n, double p, int q) {
        id = i;
        name = n;
        price = p;
        quantity = q;
    }
    int getId() {
        return id;
    }
    string getName() {
        return name;
    }
    double getPrice() {
        return price;
    }
    int getQuantity() {
        return quantity;
    }
    void setQuantity(int q) {
        quantity = q;
    }
    friend ostream& operator<<(ostream& out, const Product& p) {
      out << "Product ID: " << p.id << "\n";
      out << "Product Name: " << p.name << "\n";
      out << "Product Price: " << p.price << "\n";
      out << "Product Quantity: " << p.quantity << "\n";
      return out;
    }
};
class ShoppingCart {
private:
    static const int cartSize = 10; 
    Product cart[cartSize];          
    int itemCount;                   
public:
    ShoppingCart() : itemCount(0) {
        for (int i = 0; i < cartSize; i++) {
            cart[i] = Product(0, "", 0.0, 0);
        }
    }
    void addProduct(Product p) {
        if (itemCount < cartSize) {
            for (int i = 0; i < itemCount; i++) {
                if (cart[i].getId() == p.getId()) {
                    cart[i].setQuantity(cart[i].getQuantity() + p.getQuantity());
                    cout << "Product added successfully.\n";
                    return;
                }
            }
            cart[itemCount] = p;
            itemCount++;
            cout << "Product added successfully.\n";
        }
        else {
            cout << "Cart is full. Cannot add more items.\n";
        }
    }
    void removeProduct(int id) {
        for (int i = 0; i < itemCount; i++) {
            if (cart[i].getId() == id) {
                for (int j = i; j < itemCount - 1; j++) {
                    cart[j] = cart[j + 1];
                }
                itemCount--;
                cout << "Product removed successfully.\n";
                return;
            }
        }
        cout << "Invalid product id.\n";
    }
    double calculateTotalPrice() {
        double total = 0.0;
        for (int i = 0; i < itemCount; i++) {
            total += cart[i].getPrice() * cart[i].getQuantity();
        }
        return total;
    }
    void displayCart() {
        cout << "The items in your cart are:\n";
        for (int i = 0; i < itemCount; i++) {
            cout << cart[i] << "\n";
        }
    }
};
int main() {
    ShoppingCart sc;
    int choice = 0;
    int id, quantity;
    double total = 0.0;
    cout << "Welcome to the Shopping Cart Program!\n";
    cout << "You can add, remove, and view products in your cart.\n";
    cout << "You can also calculate and display the total price of your items.\n";
    cout << "Please follow the prompts and enter valid inputs.\n";
    Product product1(1, "Product A", 10.0, 100);
    Product product2(2, "Product B", 20.0, 50);
    Product product3(3, "Product C", 5.0, 200);
    Product selectedProduct(0, "", 0.0, 0);
    do {
        cout << "\nMenu:\n";
        cout << "1. Add a product to the cart\n";
        cout << "2. Remove a product from the cart\n";
        cout << "3. View the products in the cart\n";
        cout << "4. Calculate and display the total price of the items\n";
        cout << "5. Exit the program\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        switch(choice) {
        case 1:
            cout << "Available Products:\n";
            cout << product1 << endl;
            cout << product2 << endl;
            cout << product3 << endl;
            cout << "Enter the product id: ";
            cin >> id;
            cout << "Enter the product quantity: ";
            cin >> quantity;
            if (id == 1) {
                selectedProduct = product1;
            }
            else if (id == 2) {
                selectedProduct = product2;
            }
            else if (id == 3) {
                selectedProduct = product3;
            }
            if (selectedProduct.getId() > 0 && quantity > 0) {
                selectedProduct.setQuantity(quantity);
                sc.addProduct(selectedProduct);
            }
            else {
                cout << "Invalid input. Please enter a valid product id and a positive quantity.\n";
            }
            break;
        case 2:
            cout << "Enter the product id:";
            cin >> id;
            if (id > 0) {
                sc.removeProduct(id);
            }
            else {
                cout << "Invalid input. Please enter a positive value.\n";
            }
            break;
        case 3:
            sc.displayCart();
            break;
        case 4:
            total = sc.calculateTotalPrice();
            cout << "The total price of your item is: " << total << "\n";
            break;
        case 5:
            cout << "Thank you for using the Shopping Cart Program. Have a nice day!\n";
            break;
        default:
            cout << "Invalid choice. Please enter a number between 1 and 5.\n";
        }
    } while (choice != 5);
}