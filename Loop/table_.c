#include<iostream>
using namespace std;


int main(){
    int n,m;
    cout<<"Enter Number of N:";
    cin>>n;
    cout<<"Enter Number of M:";
    cin>>m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<i*j;
        }
        cout<<endl;
    }
    return 0;
}