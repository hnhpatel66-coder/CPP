#include<iostream>
using namespace std;

class simple{

    int data1;
    int data2;
    int data3;
    
    public:
        simple(int a, int b=9, int c=7){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printnumber(); 
};

void simple :: printnumber(){
cout<<"The value of data1,data2 and data3 is "<<data1<<" , "<<data2<<" and "<<data3<<endl;
}

int main(){
simple h(1 , 3, 5);
h.printnumber();

simple n(1 , 3);
n.printnumber();

simple s(1);
s.printnumber();
    return 0;
}