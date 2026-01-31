#include<iostream>
using namespace std;

int main(){
char car;
cout<<"Enter Caracter: "; // std::cout<<"Heloo";
cin>>car;

if('a'==car || 'e' ==car || 'i'==car || 'o' ==car || 'u'==car || 'A'==car || 'E' == car || 'I'==car || 'O'==car || 'U'==car ){
    cout<<"It is Vowel";
}
else{
    cout<<"It is Consanant";
}
    return 0;
}