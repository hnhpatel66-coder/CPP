#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a year: ";
    cin>>n;

    if((n%4==0 && n%100!=0) || n%400==0){
        cout<<n<<" is leep year";
    }
    else{
        cout<<n<<" is not leep year";
    }
return 0;
}