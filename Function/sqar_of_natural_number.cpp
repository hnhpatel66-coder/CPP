#include<iostream>
using namespace std;
int sqr(int n);

int main(){
int a;
cout<<"Enter Number of a: ";
cin>>a;
sqr(a);
return 0;
}

int sqr(int n){
    for(int i=1; i<=n; i++){
        cout<<"Sqar of "<<i<<" is "<<i*i<<endl;
    }

}