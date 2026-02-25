#include<iostream>
using namespace std;

void show(int a) {
    cout << "Integer: " << a << endl;
}

void show(double b) {
    cout << "Double: " << b << endl;
}

int main() {
    show(9);
    show(333333333);
    return 0;
}
