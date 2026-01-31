#include<iostream>
using namespace std;

int main(){

int a,b;
cout<<"Enter Numer of a: ";
cin>>a;

char op;
cout<<"Enter an operator(+,-,*,%,/) :";
cin>>op;

cout<<"Enter Numer of b: ";
cin>>b;

switch(op){
    case '+' : cout<<"Sum is "<<a+b<<endl;
                break;

    case '-' : cout<<"Supraction is "<<a-b<<endl;
                break;

    case '*' : cout<<"Product is "<<a*b<<endl;
                break;

    case '%' : cout<<"Modyoulus is "<<a%b<<endl;
                break;

    case '/' : cout<<"Division is  "<<a/b<<endl;
                break;

    default  : cout<<"Enter a valid Operator"<<endl;
                break;          
}

return 0;
}