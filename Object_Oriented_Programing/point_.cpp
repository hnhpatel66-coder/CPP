#include<iostream>
using namespace std;

class point{
    int x,y;

    public:
    point(int a, int b){
        x=a;
        y=b;
    }

    void displaypoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
};

int main(){
    point p(3, 9);
    p.displaypoint();

    point q(1, 5);
    q.displaypoint();
    return 0;
}