#include<iostream>
using namespace std;
void swap(int *a, int *b); // pass by refernce

int main(){
int a,b;
cout<<"Enter Number of a: ";
cin>>a;

cout<<"Enter Number of b: ";
cin>>b;

swap(&a,&b);
cout<<"a is: "<<a<<endl;
cout<<"b is: "<<b;
    return 0;
}

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}