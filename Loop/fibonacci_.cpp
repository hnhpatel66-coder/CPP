#include<iostream>
using namespace std;
int fibonachi(int n); // (int n) <= parameter // int fibonachi(int n); => function prototype

int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    // int ans=fibonachi(n);  // function call (or) actual parameter
    // cout<<"Fibonachi of "<<n<< " is "<<ans;
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonachi(i));
    }
    return 0;
}

int fibonachi(int n){ // formal parameter
    if(n==0) return 0;
    if(n==1) return 1;
    
    int fib = fibonachi(n-1) + fibonachi(n-2);
    return fib;
}