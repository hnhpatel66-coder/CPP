#include<iostream>
using namespace std;

int main(){
    string s1;
    cout<<"Enter String: ";
    getline(cin, s1);
    cout<<"String: "<<s1;

    for(int i=0; i!=s1.length(); i++){
        if(s1=="Nirbhay"){
            cout<<i+1<<" Nirbhay"<<endl;
        }
    }
return 0;
}