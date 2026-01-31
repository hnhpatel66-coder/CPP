#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int nst=1;
    int ml=(n/2+1);
    int nsp=n/2;

// n=5
//     * 
//   * * *
// * * * * *
//   * * *
//     *
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<"  ";
        }
        for(int j=1; j<=nst; j++){
            cout<<"* ";
        }  
        if(i<ml){
            nst+=2;
            nsp--;
        }
        else{
            nst-=2;
            nsp++;
        } 
        cout<<endl;     
    }
    return 0;
}