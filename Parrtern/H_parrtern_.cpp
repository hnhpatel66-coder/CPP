#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Number of Matrix: ";
    cin>>n;

    int ml= (n/2)+1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==1|| ml==i || j==n){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }  
        }
        cout<<endl;
    }
    return 0;
}