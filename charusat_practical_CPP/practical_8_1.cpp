#include<iostream>
using namespace std;

class  InfinitiNumberException{
    public:
        void showError() {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
};

int main(){
    double a,b;
    cout<<"Enter Value of a: ";
    cin>>a;

    cout<<"Enter Value of b: ";
    cin>>b;

    try{
        if(b==0){
            throw InfinitiNumberException();
        }
        else{
            double answer = (a / b);
            cout<<" Answer: "<<answer<<endl;
        }
    }

    catch(InfinitiNumberException a){
        a.showError();
    }
    return 0;
}