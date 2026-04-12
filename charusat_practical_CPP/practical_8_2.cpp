#include<iostream>
#include<cmath>
using namespace std;

class  NegativeNumberException{
    public:
        void showError() {
        cout << "Error: Negative number entered! Square root not possible." << endl;
    }
};

int main(){
    double n;
    cout<<"Enter Value of n: ";
    cin>>n;

    try{// risky code
        // Check for negative number
        if(n<0) {
            throw NegativeNumberException(); // throw exception
        }
        else{// Calculate square root
        double result = sqrt(n);
        cout<<"Square root = "<<result<<endl;
        }
    }

    catch(NegativeNumberException a) {
        a.showError(); // handle exception
    }
    return 0;
}