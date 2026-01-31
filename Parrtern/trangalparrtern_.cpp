#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Number :";
    cin>>n;

    // n=5
    // * * * * * 
    //   * * * *
    //     * * *
    //       * *
    //         *
    int nst=n;
    int nsp=0; 

    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }
            nsp++;
            nst--;
        cout<<endl;
    }
    return 0;
}