#include<iostream>
using namespace std;

class Employee{
    int id;
    int salary;
    public:
            void setId(void){
                salary=1111000;
                cout<<"Enter the id of employee: "<<endl;
                cin>>id;
            }
            void getId(void){
                cout<<"The id of this Employee is "<<id<<endl;
            }
};

int main(){
// Employee Nirbhay,Nruty,Prince;
//     Nirbhay.setId();
//     Nirbhay.getId();
Employee Mart[3];
for(int i=0; i<3; i++){
Mart[i].setId();
Mart[i].getId();
}
    return 0;
}