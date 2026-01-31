#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter Number: ";
    cin>>n;

    int sum=0; 
    for(i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}