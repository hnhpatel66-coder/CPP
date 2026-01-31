#include<iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"Enter a Number of a: ";
cin>>a;

cout<<"Enter b Number of b: ";
cin>>b;

cout<<"Enter c Number of c: ";
cin>>c;

if(a>b && a>c){
    cout<<"your maximumnumber is "<<a<<endl;
}

else if(b>a && b>c){
    cout<<"your maximumnumber is "<<b<<endl;
}
else{
    cout<<"your maximum nuber is "<<c<<endl;
}

return 0;
}