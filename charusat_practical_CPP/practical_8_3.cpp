#include<iostream>
using namespace std;

class AccountManagementSystem{
private:
    string name;
    int accountNumber;
    double balance;

public:
    AccountManagementSystem(){
        name = "-------"; 
        accountNumber = 0;
        balance = 0.0;
    }

    void createAccount(string n, int accNum, double bal){
        name = n;
        accountNumber = accNum;
        balance = bal;
        cout << "Account created successfully!" << endl;
    }

    void displayAccountDetails(){
        cout<<"----------------------------------------"<<endl;
        cout << "Name: " << name << endl;
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount){
        try{
            if(amount <= 0){
                throw "Invalid deposit amount!";
            }
            balance += amount;
            cout << "Deposit successful! New balance: " << balance << endl;
        }
        catch(const char* msg){
            cout << msg << endl;
        }
    }

    void withdraw(double amount){
        try{
            if(amount <= 0){
                throw "Invalid withdrawal amount!";
            }
            if(amount > balance){
                throw "Insufficient balance!";
            }
            balance -= amount;
            cout << "Withdrawal successful! New balance: " << balance << endl;
        }
        catch(const char* msg){
            cout << msg << endl;
        }
    }

    void transfer(AccountManagementSystem &toAccount, double amount){
        try{
            if(amount <= 0){
                throw "Invalid transfer amount!";
            }
            if(amount > balance){
                throw "Insufficient balance!";
            }
            balance -= amount;
            toAccount.balance += amount;
            cout << "Transfer successful!" << endl;
        }
        catch(const char* msg){
            cout << msg << endl;
        }
    }

    void addaccount(){
        string n;
        int accNum;
        double bal;
        cout << "Enter name: ";
        cin >> n;
        cout << "Enter account number: ";
        cin >> accNum;
        cout << "Enter balance: ";
        cin >> bal;
        createAccount(n, accNum, bal);
    }
};

int main(){
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;

    AccountManagementSystem acc[100]; // fixed size

    int choice;
    do{
        cout<<"1.Create"<<endl;
        cout<<"2.Display"<<endl;
        cout<<"3.Deposit"<<endl;
        cout<<"4.Withdraw"<<endl;
        cout<<"5.Transfer"<<endl;
        cout<<"6.Exit"<<endl;
        cout<<"Enter choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                for(int i=0; i<n; i++){
                    acc[i].addaccount();
                }
                break;

            case 2:
                for(int i=0; i<n; i++){
                    acc[i].displayAccountDetails();
                }
                break;

            case 3:{
                int i; double amt;
                cout<<"Index: "; cin>>i;
                cout<<"Amount: "; cin>>amt;
                acc[i-1].deposit(amt);
                break;
            }

            case 4:{
                int i; double amt;
                cout<<"Index: "; cin>>i;
                cout<<"Amount: "; cin>>amt;
                acc[i-1].withdraw(amt);
                break;
            }

            case 5:{
                int f,t; double amt;
                cout<<"From: "; cin>>f;
                cout<<"To: "; cin>>t;
                cout<<"Amount: "; cin>>amt;
                acc[f-1].transfer(acc[t-1], amt);
                break;
            }

            case 6:
                cout<<"Exiting...\n";
                break;

            default:
                cout<<"Invalid choice\n";
        }

    }while(choice != 6);

    return 0;
}