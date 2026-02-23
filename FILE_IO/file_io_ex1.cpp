#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    // connecting our file with hout stream
    ofstream hout("sample.txt");

    //creating a name string and filling it with the name entered by the user
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    hout<<name;

    //writing a string to the file
    hout<<"My Name is " + name;

    hout.close(); // closing the file after writing

    ifstream hin("sample.txt"); 
    string content;
    getline(hin,content);
    cout<<"The content of this file is: "<<content;
    hin.close(); // closing the file after reading

    return 0;
}