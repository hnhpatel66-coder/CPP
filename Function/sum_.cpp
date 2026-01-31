#include<iostream>
using namespace std;
int add(int num1,int num2);

int main(){
    int a;
    cout<<"Enter Number of a: ";
    cin>>a;

    int b;
    cout<<"Enter Number of b: ";
    cin>>b;

    int sum=add(a,b);
    cout<<"Sum is "<<sum;
    return 0;
}

int add(int num1,int num2){
   
    
    int sum = num1 + num2;
    return sum;
}