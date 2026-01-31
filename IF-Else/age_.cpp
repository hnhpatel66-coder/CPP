#include<iostream>
using namespace std;

int main(){
int age;

cout<<"Enter your Age: ";
cin>>age;

if(age>=0 && age <12){
    cout<<"you are Childern";
}
else if(age>=12 && age <18){
    cout<<"you are Teenager";
}
else if(age>=18 && age<60){
    cout<<"you are Adult";
}
else if(age>=60){
    cout<<"you are seniorcityjion";
}
else if(age<0){
    cout<<"invalid Age";
}

    return 0;
}