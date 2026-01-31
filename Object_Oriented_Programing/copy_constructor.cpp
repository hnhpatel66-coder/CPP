#include<iostream>
using namespace std;

class Number{
    int a;
    public:

    Number(){
        a = 0;
    }

    Number(int num){
        a = num;
    }

    Number(Number &obj){
        cout<<"Copy constructor called"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"The Number for this object is "<<a<<endl;
    }
};
 
int main(){
Number x,y,z(33),z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // copy consturctor invoked
    z1.display();

    z2 = z; // copy constructor not called
    z2.display();

    Number z3 = z; // ---> copy consturctor invoked
    z3.display();

    return 0;
}