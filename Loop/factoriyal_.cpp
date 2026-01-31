#include<iostream>
using namespace std;

int main(){
int n,i;
cout<<"Enter Number: ";
cin>>n;

int fact=1;
for(i=1; i<=n; i++){
    fact*=i;
}
cout<<"=> factoriyal of "<<n << " is "<< fact;
}