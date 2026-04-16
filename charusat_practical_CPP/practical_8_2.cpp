#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double n;
    cout<<"Enter Value of n: ";
    cin>>n;

    try{
        if(n<0) {
            throw n; 
        }
        else if(n>=0){
        double result = sqrt(n);
        cout<<"Square root = "<<result<<endl;
        }
    }

    catch(int  a) {
        cout<<"Error: Negative number entered! Square root not possible."<<endl;
    }
    return 0;
}