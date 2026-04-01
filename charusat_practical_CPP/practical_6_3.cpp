#include <iostream>
#include <vector>
using namespace std;

// -------------------- Fuel Class --------------------
class Fuel {
protected:
    string fuelType;

public:
    Fuel(string f) {
        fuelType = f;
    }
};

// -------------------- Brand Class --------------------
class Brand {
protected:
    string brandName;

public:
    Brand(string b) {
        brandName = b;
    }
};

// -------------------- Car Class --------------------
class Car : public Fuel, public Brand {
private:
    int carID;

public:
    Car(int id, string f, string b): Fuel(f), Brand(b), carID(id) {}

    void display() const {
        cout << "\nCar ID     : " << carID << endl;
        cout << "Brand      : " << brandName << endl;
        cout << "Fuel Type  : " << fuelType << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of cars: ";
    cin >> n;

    Car* cars[n];   // simple array of pointers
    int count = 0;
    char choice;

    do {
        int id;
        string fuel, brand;

        cout << "\nEnter Car Details\n";

        cout << "Enter Car ID: ";
        cin >> id;

        cout << "Enter Brand Name: ";
        cin >> brand;

        cout << "Enter Fuel Type: ";
        cin >> fuel;

        // dynamic object creation
        cars[count] = new Car(id, fuel, brand);
        count++;

        cout << "\nDo you want to add another car? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Display all cars
    cout << "\n===== Car Details =====" << endl;

    for (int i = 0; i < count; i++) {
        cars[i]->display();
    }

    return 0;
}


    // vector<Car> dynamicQueue;

    // // Taking user input
    // for (int i = 0; i < n; i++) {
    //     int id;
    //     string fuel, brand;

    //     cout << endl << "Enter details for Car " << i + 1 << endl;

    //     cout << "Enter Car ID: ";
    //     cin >> id;

    //     cout << "Enter Brand Name: ";
    //     cin >> brand;

    //     cout << "Enter Fuel Type: ";
    //     cin >> fuel;

    //     dynamicQueue.push_back(Car(id, fuel, brand));
    // }

    // // Display dynamic queue
    // cout << "\n===== Dynamic Queue (User Input) =====" << endl;

    // for (const auto &car : dynamicQueue) {
    //     car.display();
    // }