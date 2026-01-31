#include<iostream>
using namespace std;
int main(){
int idx=5;
char character[idx];

for(char &element:character){
    cin>>element;
}

for(int idx=0; idx<5; idx++){
    cout<<character[idx]<<" ";
}
    return 0;
}