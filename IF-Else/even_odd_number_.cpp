#include<iostream>
using namespace std;

int main(){
int num;
cout<<"Enter a Number: ";
cin>>num;

if(num %2 !=0){
    cout<<num<<" is Odd Number";
}
else if(num %2 ==0){
cout<<num<<" is Even Number";
}

return 0;
}