#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    float x, y;

public:
    // Constructor
    Point(float a, float b) {
        x = a;
        y = b;
    }

    // Function to calculate distance
    float distance(Point p) {
        return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2));
    }
};

int main() {
    Point p1(2, 3);
    Point p2(6, 7);

    cout << "Distance between two points = "<< p1.distance(p2);

    return 0;
}
