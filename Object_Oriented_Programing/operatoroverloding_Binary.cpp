#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a) {
        x = a;
    }
        //SNTEX:
        // return_type operator operator_symbol (ClassName obj)
        // {
        //     // code
        // }
    Number operator +(Number obj) {
        Number temp(0);
        temp.x = x + obj.x;
        return temp;
    }

    void display() {
        cout << "Value: " << x;
    }
};

int main() {
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    n3.display();
}
