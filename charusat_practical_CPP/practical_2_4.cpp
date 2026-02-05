#include <iostream>
using namespace std;
class Inventory_Management_System
{
    string Unique_item_ID;
    string Item_name;
    float Price;
    int Quantity_in_stock;

public:
    Inventory_Management_System()
    {
        Unique_item_ID = "*******";
        Item_name = "-------";
        Price = 0;
        Quantity_in_stock = 0;
    }
    Inventory_Management_System(string id, string name, float price, int quantity)
    {
        Unique_item_ID = id;
        Item_name = name;
        Price = price;
        Quantity_in_stock = quantity;
    }
    void add_stock();
    void sell_stock();
    void total_stock();
    void display();
};
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

void Inventory_Management_System::total_stock(){
    cout << "Total Stock: " << Quantity_in_stock << endl;
}

void Inventory_Management_System::display(){
    cout<<"________________________________________________________";
    cout << "Unique Item ID: " << Unique_item_ID << endl;
    cout << "Item Name: " << Item_name << endl;
    cout << "Price: " << Price << endl;
    cout << "Quantity in Stock: " << Quantity_in_stock << endl;
}
int main(){
    /*    Inventory_Management_System I[3]={
        Inventory_Management_System("12ABC", "Laptop", 90.12, 10),
        Inventory_Management_System(),
        Inventory_Management_System("EF346", "Mouse", 29, 50)
    };
    for(int i=0; i<3; i++)
    {
        I[i].display();
        cout << endl;
    }
    */

    int n;
    cout<<"Enter Nubers of Items: ";
    cin>>n;

    Inventory_Management_System I[n];

    for(int i=1; i<=n; i++){
        string Unique_item_ID;
        string Item_name;
        float Price;
        int Quantity_in_stock;

        cout<<"Enter Unique_item_ID: ";
        cin>>Unique_item_ID;

        cout<<"Enter Item_name: ";
        cin>>Item_name;

        cout<<"Enter price: ";
        cin>>Price;

        cout<<"Enter Quantity_in_stock: ";
        cin>>Quantity_in_stock;

       // I[i].display();
    }

    for(int i=1; i<=n; i++){
        I[i].display();
    }
    return 0;
}