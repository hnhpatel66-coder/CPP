#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string: ";
    //fgets(str, 100, stdin);
    getline(cin, str);

    cout<<"Original String: "<<str<<endl;
    map<string, int> m;


    return 0;
}