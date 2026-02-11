#include <iostream>
using namespace std;
class Inventory_Management_System{
    string Unique_item_ID;
    string Item_name;
    float Price;
    int Quantity_in_stock;

public:
    Inventory_Management_System():Unique_item_ID(0),Item_name(0), Price (0),Quantity_in_stock(0){}
       
    Inventory_Management_System(string id, string name, float price, int quantity){
        Unique_item_ID = id;
        Item_name = name;
        Price = price;
        Quantity_in_stock = quantity;
    }
    void add_stock();
    void sell_stock();
    void total_stock(int n, Inventory_Management_System I[]);
    void display();
    void input();
};
void Inventory_Management_System::input(){
    cout << "Unique Item ID: "; cin>>Unique_item_ID;
    cout << "Item Name: "; cin>>Item_name;
    cout << "Price: "; cin>>Price;
    cout << "Quantity in Stock: "; cin>>Quantity_in_stock;
}

void Inventory_Management_System::display(){
    cout << "______________________________________________________________________" << endl;
    cout << "Unique Item ID: " << Unique_item_ID << endl;
    cout << "Item Name: " << Item_name << endl;
    cout << "Price: " << Price << endl;
    cout << "Quantity in Stock: " << Quantity_in_stock << endl;
}

void Inventory_Management_System::add_stock()
{
    int quantity;
    cout << "Enter Quantity to Add: ";
    cin >> quantity;

    Quantity_in_stock += quantity;
}
void Inventory_Management_System::sell_stock()
{
    int quantity;
    cout << "Enter Quantity to Sell: ";
    cin >> quantity;
    if (quantity <= Quantity_in_stock)
    {
        Quantity_in_stock -= quantity;
    }
    else
    {
        cout << "Insufficient Stock!" << endl;
    }
}

int main(){
    Inventory_Management_System A(),B(string id, string name, float price, int quantity);
    A.input();
    A.add_stock();
    A.sell_stock();
    A.display();

    B.input();
    B.add_stock();
    B.sell_stock();
    B.display();

return 0;
}