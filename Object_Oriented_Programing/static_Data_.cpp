#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(void){
        cout<<"Enter The ID: "<<endl;
        cin>>id;
        count++;
        }
        void getData(void){
        cout<<" The ID no  of this Employee is "<<id<<" and this is Employee Number"<<count<<endl;
        }
        static void getcount(void){
            cout<<" The value of count is "<<count<<endl;
        }
};

int Employee :: count; // Defulat Value is 0

int main(){
Employee Nirbhay,Nruty,Revang;
// Count is the static Data Member of Class Employee    
    Nirbhay.setData();
    Nirbhay.getData();
    Employee::getcount();

    Nirbhay.setData();
    Nirbhay.getData();
    Employee::getcount();
    
    Nirbhay.setData();
    Nirbhay.getData();   
    Employee::getcount(); 

return 0;
}