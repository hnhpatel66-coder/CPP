#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    string st;
    cout<<"Enter your name: ";
    getline(cin,st);
    string st2;
    //opening file using constructor and writing it
    //out is write to a file this .txt file
    ofstream out("sample.txt"); // write operation
    out<<st;

    cin.ignore(); // to ignore the newline character left in the input buffer

    //opening file using constructor and reading it
    ifstream in("sample1.txt"); // read operation
    //in>>st2; // this will only read the first word
    getline(in,st2); // this will read the whole line
    cout<<st2;


    return 0;
}