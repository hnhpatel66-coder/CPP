#include<iostream>
using namespace std;


class complex{
    int a,b;

    public:
    
    complex(int , int);// constructor declaration

    void printnumber(){
        cout<<" your nuber is "<<a<<" + "<<b<< "i"<<endl;
    }
};
complex :: complex(int x, int y){ //Parameterized constructon as it accept two parameter
    a = x;
    b = y;
    //cout<<"Hello World"<<endl;
}
int main(){
    // Implicit Call
    complex a(2, 7);
    a.printnumber();

    // Explicit Call
    complex b = complex(3, 9);
    b.printnumber();
    return 0;
}
