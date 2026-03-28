#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out; // opening a file in write mode
    out.open("sample.txt"); // this will not open the file again, it will just check if the file is already open or not
    out<<"This is me"<<endl;
    out.close(); // closing the file after writing

    istream in;
    string st;
    in.open("sample.txt"); // this will not open the file again, it will just check if the file is already open or not
    in>>st;
    cout<<st;
    in.close(); 
    return 0;
}