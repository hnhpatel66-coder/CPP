#include<iostream>
using namespace std;
int primeno(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    for(int i=2;i<=n;i++){
        if(primeno(i)){
            cout<<i<<" ";
        }
    }

    return 0;
}