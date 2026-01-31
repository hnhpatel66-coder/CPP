#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter Number: ";
cin>>n;

int sum=0;
int i=0;
do{
    int num;
    cin>>num;
    sum+=num;
    n--;
}while(n>0);

cout<<sum<<endl;

    return 0;
}