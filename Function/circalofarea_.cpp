#include<iostream>
using namespace std;
float area(float r);
float circumference(float r);

int main(){
    float r;
    cout<<"Enter Rediuc: ";
    cin>>r;

    float are=area(r);
    float circum=circumference(r);

    cout<<"Area of Circle is "<<are<<endl;
    cout<<"Circumference of Circle is "<<circum;
    return 0;
}
float area(float r){
    float ans=3.14*r*r;
    return ans;
}
float circumference(float r){
    float result=2*3.14*r;
    return result;
}