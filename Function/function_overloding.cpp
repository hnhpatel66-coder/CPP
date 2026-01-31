#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using Function with 2 Arguments"<<endl;
    return a+b;
}
int sum(int a, int b, int c){
    cout<<"Using Function with 3 Arguments"<<endl;
    return a+b+c;
}

int main(){
    int a,b,c;

    cout<<"The Sum of 3 and 9 is "<<sum(3,9)<<endl;
    cout<<"The Sum of 3,11 and 9 is "<<sum(3,11,9);
    return 0;
}