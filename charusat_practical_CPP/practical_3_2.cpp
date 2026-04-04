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
        AccountManagementSystem(string n, int accNum, double bal){
            name = n;
            accountNumber = accNum;
            balance = bal;
        }
        void createAccount(string n, int accNum, double bal){
            name = n;
            accountNumber = accNum;
            balance = bal;
            cout << "Account created successfully!" << endl;
        }

        void displayAccountDetails(){
            cout<<"---------------------------------------------------------"<<endl;
            cout << "Account Holder Name: " << name << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }

        void deposit(double amount){
            if(amount > 0){
                balance += amount;
                cout << "Deposit successful! New balance: " << balance << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }
        
        void withdraw(double amount){
            if(amount > 0 && amount <= balance){
                balance -= amount;
                cout << "Withdrawal successful! New balance: " << balance << endl;
            } else {
                cout << "Invalid withdrawal amount or insufficient funds!" << endl;
            }
        }

        void transfer(AccountManagementSystem &toAccount, double amount){
            if(amount > 0 && balance >= amount){
                balance -= amount;
                toAccount.balance += amount;
                cout << "Transfer successful! New balance: " << balance << endl;
            } else {
                cout << "Invalid transfer amount or insufficient funds!" << endl;
            }
        }

        void addaccount(){
            string n;
            int accNum;
            double bal;
            cout << "Enter account holder name: ";
            cin >> n;
            cout << "Enter account number: ";
            cin >> accNum;
            cout << "Enter initial balance: ";
            cin >> bal;
            createAccount(n, accNum, bal);
        }

};

int main(){
    int n;
    cout << "Enter the number of accounts to create: ";
    cin >> n;

    AccountManagementSystem acc[n];
    int choice;
    do{
        cout<<"------------Welcome to Account Management System------------"<<endl;
        cout << "1. Create Account" << endl;
        cout << "2. Display Account Details" << endl;
        cout << "3. Deposit" << endl;
        cout << "4. Withdraw" << endl;
        cout << "5. Transfer" << endl;  
        cout<<  "6. Add Account"<<endl;
        cout << "7. Exit" << endl;

        switch(choice){
            case 1:
                for(int i=0; i<n; i++){
                    cout << "Creating account " << i+1 << ":" << endl;
                    acc[i].addaccount();
                }
                break;
            case 2:
                for(int i=0; i<n; i++){
                    cout << "Account " << i+1 << " details:" << endl;
                    acc[i].displayAccountDetails();
                }
                break;
            case 3:
                int depIndex;
                double depAmount;
                cout << "Enter account index to deposit into: ";
                cin >> depIndex;
                cout << "Enter amount to deposit: ";
                cin >> depAmount;
                if(depIndex > 0 && depIndex <= n){
                    acc[depIndex-1].deposit(depAmount);
                } else {
                    cout << "Invalid account index!" << endl;
                }
                break;
            case 4:
                int withIndex;
                double withAmount;
                cout << "Enter account index to withdraw from: ";
                cin >> withIndex;
                cout << "Enter amount to withdraw: ";
                cin >> withAmount;
                if(withIndex > 0 && withIndex <= n){
                    acc[withIndex-1].withdraw(withAmount);
                } else {
                    cout << "Invalid account index!" << endl;
                }
                break;
            case 5:
                int fromIndex, toIndex;
                double transAmount;
                cout << "Enter source account index: ";
                cin >> fromIndex;
                cout << "Enter destination account index: ";
                cin >> toIndex;
                cout << "Enter amount to transfer: ";
                cin >> transAmount;
                if(fromIndex > 0 && fromIndex <= n && toIndex > 0 && toIndex <= n){
                    acc[fromIndex-1].transfer(acc[toIndex-1], transAmount);
                } else {
                    cout << "Invalid account index!" << endl;
                }
                break;
            case 6:
                acc[n].addaccount();
                n++;
                break;
            case 7:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }while(7!=0);
    return 0;
}