#include<iostream>
using namespace std;

class account{
    protected:
        string name;
        int acc_no;
        double balance;
    public:

        account(){
            name = "***";
            acc_no = 000;
            balance = 0.0;
        }

        account(string n, int a, double b){
            name = n;
            acc_no = a;
            balance = b;
        }

        void input(){
            cout<<"----------------Enter Your Bank Detail-----------------------"<<endl;
            cout<<"Enter your Name: ";  
            cin>>name;

            cout<<"Enter your   Account Number: ";
            cin>>acc_no;

            cout<<"Enter your Balance: ";
            cin>>balance;
        }

        void display(){
            cout<<"---------------------Your Bank Detail----------------------------"<<endl;

            cout<<"Name: "<<name<<endl;
            cout<<"Account Number: "<<acc_no<<endl;
            cout<<"Balance: "<<balance<<endl;
        }

        void deposit(){
            
            double amount;
            cout<<"Enter the amount to deposit: ";
            cin>>amount;

            balance += amount;
            cout<<"Amount deposited successfully. New balance: "<<balance<<endl;
        }

        void withdraw(){

            double amount;
            cout<<"Enter the amount to withdraw: ";
            cin>>amount;
    
            if(amount > balance){
                cout<<"Insufficient balance. Withdrawal failed."<<endl;
            }
            else{
                balance -= amount;
                cout<<"Amount withdrawn successfully. New balance: "<<balance<<endl;
            }
        }
};

class SavingsAccount: public account{
    protected:
         
    public:
        
        void interest_rate(){
            float intrestrate = ((balance * 2.5)/100);
            balance += intrestrate;

            cout<<"your balance after adding intrest is: "<<balance<<endl;
        } 

};

class CurrentAccount: public account{
    protected:

    public:
        void minimum_balance(){
            if(balance < 1000){
                cout<<"Your balance is less than 1000, Please deposit more money to avoid penalty."<<endl;
            }
            else{
                cout<<"Your balance is sufficient, No penalty applied."<<endl;
            }
        }
        void maximum_balance(){
            if(balance > 5000000){
                cout<<"Your balance is more than 5000000, Please consider investing to earn more."<<endl;
            }
            else{
                cout<<"Your balance is within the acceptable limit."<<endl;
            }
        }
    
};

int main(){
    int n;
    cout<<"Enter the number of saving accounts: ";
    cin>>n;

    int m;
    cout<<"Enter the number of current accounts: ";
    cin>>m;

    SavingsAccount s1[n];
    CurrentAccount c1[m];

    do{
        cout<<"--------------Welcome to the bank management system------------------"<<endl;
        cout<<"1. Enter Input for Account"<<endl;
        cout<<"2. Display Account Details"<<endl;
        cout<<"3. Deposit Amount"<<endl;
        cout<<"4. Withdraw Amount"<<endl;
        cout<<"5. Calculate Interest for Savings Account"<<endl;
        cout<<"6. Check Minimum Balance for Current Account"<<endl;
        cout<<"7. Check Maximum Balance for Current Account"<<endl;
        cout<<"8. Exit"<<endl;

        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                    for(int i=0; i<n; i++){
                        cout<<"---------------------Enter Details for Savings Account "<<i+1<<"----------------------------"<<endl;
                        s1[i].input();
                    }
                    for(int j=0; j<m; j++){
                        cout<<"---------------------Enter Details for Current Account "<<j+1<<"----------------------------"<<endl;
                        c1[j].input();
                    }
                break;
            case 2:
                    for(int i=0; i<n;i++){
                        s1[i].display();
                    }
                    for(int j=0; j<m;j++){
                        c1[j].display();
                    }
                break;
            case 3:
                    for(int i=0; i<n; i++){
                        s1[i].deposit();
                    }
                    for(int i=0; i<m; i++){
                        c1[i].deposit();
                    }
                break;
            case 4:
                    for(int i=0; i<n; i++){
                        s1[i].withdraw();
                    }
                    for(int i=0; i<m; i++){
                        c1[i].withdraw();
                    }
                break;
            case 5:
                    for(int i=0; i<n; i++){
                        s1[i].interest_rate();
                    }
                    
                break;
            case 6:
                    for(int i=0; i<m; i++){
                        c1[i].minimum_balance();
                    }
                break;
            case 7:
                   
                    for(int i=0; i<m; i++){
                        c1[i].maximum_balance();
                    }
                break;
            case 8:
                cout<<"Exiting the system. Goodbye!"<<endl;
                break;
            default:
                cout<<"Invalid choice. Please try again."<<endl;
        }

    }while(7!=0);
    // for(int i=0; i<n; i++){
    //     s1[i].input();
    //     //s1[i].display();
    //     s1[i].deposit();
    //     s1[i].withdraw();
    //     s1[i].interest_rate();

    //     cout<<"------------------------------------------------------"<<endl;
    // }

    // for(int i=0; i<m; i++){
    //     c1[i].input();
    //     //c1[i].display();
    //     c1[i].deposit();
    //     c1[i].withdraw();
    //     c1[i].minimum_balance();
    //     c1[i].maximum_balance();

    //     cout<<"------------------------------------------------------"<<endl;
    // }
    // for(int i=0; i<n; i++){
    //     cout<<"---------------------Final Details of Savings Account----------------------------"<<endl;
    //     s1[i].display();
    // }
    // for(int i=0; i<m; i++){
    //     cout<<"---------------------Final Details of Current Account----------------------------"<<endl;
    //     c1[i].display();
    // }
    
    return 0;
}