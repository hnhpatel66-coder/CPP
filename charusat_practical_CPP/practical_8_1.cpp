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

    try{ //try -> risky code
        if(b==0){
            throw InfinitiNumberException(); // throw -> error send(mokle)
        }
        else{
            double answer = (a / b);
            cout<<" Answer: "<<answer<<endl;
        }
    }

    catch(InfinitiNumberException a){ // catch -> error handle
        a.showError();
    }
    return 0;
}