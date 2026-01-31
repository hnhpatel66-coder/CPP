#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

// n=5
//     *     
//     *
// * * * * *
//     *
//     *
    for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
        if((n/2+1)==i || (n/2+1)==j){  // midal line =(n/2+1)
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
      }
        cout<<"\n";
    }
    return 0;
}