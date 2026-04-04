#include <iostream>
using namespace std;

//syntex of template function:
//template <typename T>
// return_type function_name(T parameter1, T parameter2) {
//     // code
// }

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(5, 10) << endl;        // int
    cout << add(5.5, 2.5) << endl;    // float
    return 0;
}