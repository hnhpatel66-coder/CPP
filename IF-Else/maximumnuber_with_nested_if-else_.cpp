#include<iostream>
using namespace std;

int main(){
int n1,n2,n3;

cout<<"Enter Number of n1: ";
cin>>n1;

cout<<"Enter Number of n2: ";
cin>>n2;

cout<<"Enter Number of n3: ";
cin>>n3;

if(n1 > n2){
    if(n1>n3){
        cout<<n1<<" is Maximum";
    }
    else{
       cout<<n3<<" is Maximum"; 
    }
}

else{
    if(n2>n3){
        cout<<n2<<" is maximum";
    }
    else{
        cout<<n3<<" is maximum";
    }
}
}