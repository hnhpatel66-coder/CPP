#include<iostream>
using namespace std;

class complex{
    int a,b;

    public:
    // creating a constuctor
    // consturctor is aspecial member function with the same name as of the class
    //it is used to initilize the objects of its class
    //it is automatically invoked whenever an object is created

    complex(void);// constructor declaration
    void printnumber(){
        cout<<" your nuber is "<<a<<" + "<<b<< "i"<<endl;
    }
};

complex :: complex(void){ //Defoult construction as it accept no parameter
    a = 10;
    b = 0;
    //cout<<"Hello World"<<endl;
}
int main(){
    complex c;
    c.printnumber();
    c.printnumber();
    c.printnumber();
    return 0;
}
/* Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/