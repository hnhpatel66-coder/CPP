#include<iostream>
using namespace std;
// 1 + 4i
// 5 + 8i
//---------
// 6 + 12i

class complex{
    int a, b;
    friend complex sumcomplex(complex o1, complex o2);

    public :
        void setnumber(int n1, int n2){
        a=n1;
        b=n2;
        }
        void printnumber(){
            cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumcomplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main(){
complex c1,c2,sum;
    c1.setnumber(1,3);
    c1.printnumber();

    c2.setnumber(5,8);
    c2.printnumber();

    sum = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}

/* 
######################Properties of friend functions##################################
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/