#include<iostream>
using namespace std;

int main(){
    int a,b,gcd,lcm;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"GCD= ";

    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            //cout<<"GCD of "<<a<<" and "<<b<<" is: "<<i<<endl;
            gcd = i;
        }
    }

    lcm = (a * b) / gcd;

    cout <<"gcd ="<< gcd << endl;
    cout << "LCM= " << lcm << endl;

return 0;
}