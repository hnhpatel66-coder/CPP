#include<iostream>
using namespace std;

void show(int a) {
    cout << "Integer: " << a << endl;
}

void show(double b) {
    cout << "Double: " << b << endl;
}

int main() {
    show(10);
    show(5.5);
    return 0;
}
