#include<iostream>
using namespace std;

template <class  T1, class T2>
float Avrage(T1 a, T2 b){
    float ans=(a+b)/2;
    return ans; 
}
int main(){
    cout<<"Average is "<<Avrage(9,3)<<endl;
    cout<<"Average is "<<Avrage(9.111,3.333)<<endl;
    cout<<"Average is "<<Avrage(9,3.77)<<endl;
return 0;
}