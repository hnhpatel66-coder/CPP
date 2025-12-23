#include<iostream>
using namespace std;

int main(){
int a,b,sum;

cout<<"Entere Number of a:";
cin>>a;

cout<<"Entere Number of b:";
cin>>b;

int c=a;
a=b;
b=c;

cout<<"Number of a:"<<a<<endl;

cout<<"Number of b:"<<b<<endl;

sum =a+b;
cout<<"=> The Sum is "<<sum<<endl;

return 0;
}