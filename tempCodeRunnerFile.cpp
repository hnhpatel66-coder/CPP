#include<iostream>
#include<string>
using namespace std;

class account_management_systme{
private:
    int Account_number;
    string Account_holders_name;
    double Current_balance;

public:
    static int account_count;

    account_management_systme(): Account_number(0), Account_holders_name(""), Current_balance(0){
        account_count++;
    }

    void input(){
        cout<<"Enter Account Number: ";
        cin>>Account_number;
        cout<<"Enter Name: ";
        cin>>Account_holders_name;
        cout<<"Enter Balance: ";
        cin>>Current_balance;
    }

    void display(){
        cout<<"--------------------------"<<endl;
        cout<<"Account Number: "<<Account_number<<endl;
        cout<<"Name: "<<Account_holders_name<<endl;
        cout<<"Balance: "<<Current_balance<<endl;
    }
};

int account_management_systme::account_count = 0;

int main(){
    int n;
    cout<<"How many accounts? ";
    cin>>n;

    // 🔹 Dynamic array
    account_management_systme* account = new account_management_systme[n];

    int choice;
    do{
        cout<<"\n1.Input\n2.Display\n3.Add Account\n4.Exit\n";
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                for(int i=0; i<n; i++){
                    account[i].input();
                }
                break;

            case 2:
                for(int i=0; i<n; i++){
                    account[i].display();
                }
                break;

            case 3:
            {
                int m;
                cout<<"How many new accounts? ";
                cin>>m;

                int newSize = n + m;

                // 🔹 Create new bigger array
                account_management_systme* newaccount = new account_management_systme[newSize];

                // 🔹 Copy old data
                for(int i = 0; i < n; i++){
                    newaccount[i] = account[i];
                }

                // 🔹 Input new accounts
                for(int i = n; i < newSize; i++){
                    newaccount[i].input();
                }

                // 🔹 Delete old array
                delete[] account;

                // 🔹 Point to new array
                account = newaccount;

                // 🔹 Update size
                n = newSize;

                cout<<"Total accounts: "<<n<<endl;
            }
            break;

            case 4:
                cout<<"Exiting program..."<<endl;
                break;

            default:
                cout<<"Invalid choice!"<<endl;
        }

    }while(choice != 4);

    // 🔹 Free memory
    delete[] account;

    return 0;
}