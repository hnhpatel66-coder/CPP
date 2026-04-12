#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    auto result = (a <=> b);

    if (result > 0)
        cout << "a is greater";
    else if (result < 0)
        cout << "a is smaller";
    else
        cout << "equal";

    return 0;
}