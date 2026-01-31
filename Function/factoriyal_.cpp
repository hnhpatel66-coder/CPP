#include<iostream>
using namespace std;
int factoriyal(int n);

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int fact=factoriyal(n);
    cout<<"Factoriyal of "<<n<< " is "<<fact;
    return 0;
}

int factoriyal(int n){
    if(n<=1) return 1;
    
    int fact = n*factoriyal(n-1);
    return fact;
}