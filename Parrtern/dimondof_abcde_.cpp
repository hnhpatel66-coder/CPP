#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int nst=1;
    int ml=(n/2+1);
    int nsp=n/2;

// n=9
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI
//  ABCDEFG
//   ABCDE
//    ABC
//     A
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        int a=1;
        for(int j=1; j<=nst; j++){
            int d=64+a;
            //char ch=(char)d;
            cout<<(char)d;
            a++;  
        }  
        if(i<ml){
            nst+=2;
            nsp--;
        }
        else{
            nst-=2;
            nsp++;
        } 
        cout<<"\n";     
    }
    return 0;
}