#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number :";
    cin>>n;

    int nst=n;
    int nsp=0; 
     nst++;
        nsp--;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
        for(int j=1; j<=nsp; j++){
            cout<"  ";
        }
        cout<<endl;
    }
    return 0;
}