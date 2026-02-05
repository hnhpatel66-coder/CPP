#include<iostream>
using namespace std;

class Digital_Saving_Account{
private:// Data Member
    string name;
    string accountID;
    double balance;
    
public:// Member Function
//soecial function // constroctor function
        Digital_Saving_Account(){ // Defult Constructor
            name="***";
            accountID="***";
            balance=0;
        }

        Digital_Saving_Account(string name,string accountID,double balance){ // paramitrize Constructor
            name="***";
            accountID="***";
            balance=0;
        }
        void input();
        void addaccount();
        void display();
        void depositMony();
        void withrawMony();
};

void Digital_Saving_Account::input(){
            cout<<"\n Enter Userid: ";   cin>>accountID;
            cout<<" \n Enter Balance: "; cin>>balance;
            cout<<"\n Enter Name: ";     cin>>name;
}

void Digital_Saving_Account::display(){
            cout<<"\n Enter Userid: "<<accountID;
            cout<<" \n Enter Balance: "<<balance;
            cout<<"\n Enter Name: "<<name;
}

void Digital_Saving_Account::depositMony(){
            float amount;
            cout<<"\n how much deposit want to money? :";
            cin>>amount;
            balance+=amount;
            cout<<amount<<"\n Money Deposit your account "<<endl;
}

void Digital_Saving_Account::withrawMony(){
            float amount;
            cout<<"\n how much Trancfer want to money? :";
            cin>>amount;
            balance-=amount;
            cout<<amount<<"\n Money Trancfer your account "<<endl;
}

int main()
{
Digital_Saving_Account A1,B1("Nirbhay","25IT031",48577);
    A1.display();
    B1.display();


    return 0;
}