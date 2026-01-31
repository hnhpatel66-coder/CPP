#include<iostream>
using namespace std;

class Base1{
    public:
        void greet{
            cout<<"How are you? ";
        }
};

class Base2{
    public:
        void greet{
            cout<<"Kaise ho ap? ";
        }
};

class Derived : public Base1, public Base2{
    int a;
};

int main(){
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base1obj.greet();
    
    return 0;
}