#include <iostream>
#include<cmath>
using namespace std;

/*
Create 2 classes:
1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.

2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and displays the results using another function.

Create another class HybridCalculator and inherit it using these 2 classes:

Q1. What type of Inheritance are you using? --> Multiple Inheritance
Q2. Which mode of Inheritance are you using? --> Public Simple Calculator and Public ScientificCalculator
Q3. Create an object of HybridCalculator and display results of simple and scientific calculator? --> 
Q4. How is code reusability implemented?
*/

class SimpleCalculator{
    int a,b;
    public:
    void getDataSimple(){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }   
    
    void performoperationsimple(){
        cout<<"The value of a + b is: "<<a + b<<endl;
        cout<<"The value of a - b is: "<<a - b<<endl;
        cout<<"The value of a * b is: "<<a*b<<endl;
        cout<<"The value of a / b is: "<<a/b<<endl;
    }
};

class ScientificCalculator{
    int a,b;
    public:
    void getDataScientific(){
        cout<<"Enter the value of a: ";
        cin>>a;
        cout<<"Enter the value of b: ";
        cin>>b;
    }   
    
    void performoperationScientific(){
        cout<<"The value of cos(a) is: "<<cos(a)<<endl;
        cout<<"The value of sin(a) is: "<<sin(a)<<endl;
        cout<<"The value of tan(a) is: "<<tan(a)<<endl;
        cout<<"The value of exp(b) is: "<<exp(b)<<endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};

int main(){
    // SimpleCalculator calc;
    // calc.getDataSimple();
    // calc.performoperationsimple();

    // ScientificCalculator Scalc;
    // Scalc.getDataScientific();
    // Scalc.performoperationScientific();

    HybridCalculator calc;
    calc.getDataSimple();
    calc.performoperationsimple();
    calc.getDataScientific();
    calc.performoperationScientific();
    
    return 0;
}