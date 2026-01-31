#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter Number of Rows: ";
    cin>>rows;

    int colums;
    cout<<"Enter Number of Colums: ";
    cin>>colums;

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=colums; j++){
           if(i==1 || j==1 || i==rows || j==colums){
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