#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
        void getData(){
            cout<<"The real part is "<< real<<endl;
            cout<<"The imaginary part is "<< imaginary<<endl;
        }

        void setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main(){
    Complex *ptr1 = new Complex;
    // (*ptr).setData(1, 54); is exactly same as
    ptr1->setData(1,54);
    // (*ptr).getData(); is as good as 
    ptr1->getData();

    Complex *ptr2 = new Complex;
    ptr2->setData(1, 54);
    ptr2->getData(); 

    // Array of Objects
    Complex *ptr3 = new Complex[4]; 
    ptr3->setData(1, 3); 
    ptr3->getData();
    return 0;
}