#include<iostream>
using namespace std;
inline int mul(int num1,int num2);

int main(){
    int a;
    cout<<"Enter Number of a: ";
    cin>>a;

    int b;
    cout<<"Enter Number of b: ";
    cin>>b;

    int product=mul(a,b);
    cout<<"Produc is "<<product;
    return 0;
}

inline int mul(int num1,int num2){

    return num1*num2;
}