#include<iostream>
//#include<cmath>
using namespace std;

template <class T>
T swapp(T &a,T &b){
    T temp = a;
    a = b;
    b = temp;
} 

int main(){
    int x=7;
    int y=9;

    swapp(x,y);
    cout<<"X = "<<x<<endl;
    cout<<"Y = "<<y;
return 0;
}