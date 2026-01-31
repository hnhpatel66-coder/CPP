#include<iostream>
using namespace std;

int isodd(int n){
    if(n%2==0){
        return false; 
    }
    else{
        return true;
    }
}

int main(){
    int n;
    cin>>n;

    for(int i=1; i<=n;i++){
        if(isodd(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}