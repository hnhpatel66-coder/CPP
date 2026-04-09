#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout<<"Base Constructor Called"<<endl;
    }

    //  Non-virtual destructor
    ~Base() {
        cout<<"Base Destructor Called"<<endl;
    }
};

class Derived : public Base {
    int* data;
public:
    Derived() {
        data = new int[5]; // dynamic memory allocation
        cout<<"Derived Constructor Called"<<endl;
    }

    ~Derived() {
        delete[] data; // memory free
        cout<<"Derived Destructor Called"<<endl;
    }
};

int main() {
    cout<<"---- Without Virtual Destructor ----"<<endl;

    Base* ptr;
    ptr = new Derived();  // polymorphism
    delete ptr;                //  Derived destructor NOT called

    return 0;
}