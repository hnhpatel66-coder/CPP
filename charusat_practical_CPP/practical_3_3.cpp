#include<iostream>
#include<string>
using namespace  std;

class account_management_syste{
    private:
        int Account_number;
        string Account_holders_name;
        double Current_balance;
    public:
        account_management_syste(): Account_number(0), Account_holders_name(0), Current_balance(0){}
        account_management_syste(int A_n, string holders_name, double balance){
            int Account_number=A_n;
            string Account_holders_name=holders_name;
            double Current_balance=balance;
        }
        void display(){
            cout<<"__________________________________________________________________________"<<endl;
            cout<<"Enter Account_Number: "; cin>>Account_number;
            cout<<"Enter Account_holders_name: "; cin>>Account_holders_name;
            cout<<"Enter Current_balance: "; cin>>Current_balance;
        }
        void MoneyTran(){
            float amount;
            cout<<"\n how much Trancfer want to money? :";
            cin>>amount;

            if(Current_balance >= amount){
            Current_balance-=amount;
            cout<<amount<<"\n Money Trancfer your account "<<endl;
            }
            else{
                cout<<"invalid transactions!!!"<<endl;
            }
        }
        void add_account(){
            
        }
};

int main(){

}