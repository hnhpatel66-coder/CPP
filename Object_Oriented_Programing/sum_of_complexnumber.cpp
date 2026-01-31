#include<iostream>
using namespace std;
// Forwrd Decleretion 
class complex;

class calculater{
    public:
    int add(int a, int b)
    {
    return (a + b);
    }   
    int sumrealcomplex(complex , complex);
    int sumcompcomplex(complex , complex);
};

class complex{
    int a, b;
    friend int calculater :: sumrealcomplex(complex , complex);
    friend int calculater :: sumcompcomplex(complex , complex);

    // friend class calculater;

    public :
        void setnumber(int n1, int n2){
        a=n1;
        b=n2;
        }
        void printnumber(){
            cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

    int calculater :: sumrealcomplex(complex o1, complex o2){
        return (o1.a+o2.a);
    }

    int calculater :: sumcompcomplex(complex o1, complex o2){
        return (o1.b+o2.b);
    }

int main(){
    complex o1,o2;
    o1.setnumber(1,4);
    o1.printnumber();

    o2.setnumber(5,7);
    o2.printnumber();

    calculater calc;

    int res = calc.sumrealcomplex(o1,o2);
    int resc = calc.sumcompcomplex(o1,o2);

    cout<<" The sum of real part of o1 and o2 is "<<res<<endl;
    cout<<" The sum of complex part of o1 and o2 is "<<resc<<endl;   
    cout<<"THANKYOU"; 
    return 0;
}