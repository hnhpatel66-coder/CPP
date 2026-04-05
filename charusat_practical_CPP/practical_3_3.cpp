#include<iostream>
#include<string>
using namespace  std;

class account_management_systme{
    private:
        int Account_number;
        string Account_holders_name;
        double Current_balance;
    public:
        static int account_count;
        account_management_systme(): Account_number(0), Account_holders_name("***"), Current_balance(0.0){
            account_count++;
        }
        account_management_systme(int A_n, string holders_name, double balance){
            int Account_number=A_n;
            string Account_holders_name=holders_name;
            double Current_balance=balance;
        }
        double current_balance(){
            
            return Current_balance;
        }
        

        void input(){
            cout<<"Enter Account_Number: "; 
            cin>>Account_number;
            cout<<"Enter Account_holders_name: "; 
            cin>>Account_holders_name;    
            cout<<"Enter Current_balance: "; 
            cin>>Current_balance;
        }
        void display(){
            cout<<"--------------------------------------------------------------------"<<endl;
            cout<<"Enter Account_Number: "<<Account_number<<endl;
            cout<<"Enter Account_holders_name: "<<Account_holders_name<<endl;
            cout<<"Enter Current_balance: "<<Current_balance<<endl; 
        }
        void MoneyTran(account_management_systme &to_account){
            float amount;
            cout<<" how much Trancfer want to money? :";
            cin>>amount;

            if(Current_balance >= amount){
            Current_balance-=amount;
            cout<<amount<<" Money Trancfer there account "<<endl;
            to_account.Current_balance+=amount;
            cout<<amount<<" Money Recive your account "<<endl;
            cout<<to_account.Current_balance<<" balance after transfer "<<endl;
            }
            else{
                cout<<"invalid transactions!!!"<<endl;
            }
        }
        void Deposit(){
            float amount;
            cout<<" how much Deposit want to money? :";
            cin>>amount;
            Current_balance+=amount;
            cout<<amount<<" Money Deposit your account "<<endl;
        }
        void withdraw(){
            float amount;
            cout<<" how much Withdraw want to money? :";
            cin>>amount;

            if(Current_balance >= amount){
            Current_balance-=amount;
            cout<<amount<<" Money Withdraw your account "<<endl;
            }
            else{
                cout<<"invalid transactions!!!"<<endl;
            }
        }


        static void get_account_count(){
            cout<<"Total accounts created: "<<account_count<<endl;
        }
};

int account_management_systme::account_count=0;

int main(){
int n;
cout<<"How many account you want to create? :";
cin>>n;

     account_management_systme* account = new account_management_systme[n];
    
    int choice;
    do{
        cout<<"-----------------------Welcom----------------------"<<endl;
        cout<<"1. Add account "<<endl;
        cout<<"2. Display account "<<endl;
        cout<<"3. Money Transfer "<<endl;
        cout<<"4. Deposit "<<endl;
        cout<<"5. Withdraw "<<endl;
        cout<<"6. input "<<endl;
        cout<<"7 Exit "<<endl;

        cout<<"Enter your choice: ";
        cin>>choice;
        
        switch(choice){
            case 1:{
        
                cout<<"how many new account you want to create? :";
                int m;
                cin>>m;
                
                    int newb = m+account_management_systme::account_count;
                    account_management_systme newaccount[newb];

                    for(int i=0; i<account_management_systme::account_count; i++){
                        newaccount[i] = account[i];
                    }
                    for(int i=account_management_systme::account_count; i<newb; i++){
                        newaccount[i].input();
                    }
                    delete[] account;
                    account = newaccount;
                    n = newb;
                    account_management_systme::account_count = newb;
                    cout<<"Total accounts created: "<<account_management_systme::account_count<<endl;
                } break;
            
                break;
            case 2:
                for(int i=0; i<n; i++){
                    account[i].display();
                }
                break;
            case 3:
                cout<<"Enter the index of the account to transfer from (1 to "<<n<<"): ";
                int from_account_index;
                cin>>from_account_index;
                cout<<"Enter the index of the account to transfer to (1 to "<<n<<"): ";
                int to_account_index;
                cin>>to_account_index;
                cout<<"Enter the amount to transfer: ";
                double amountt;
                cin>>amountt;
                if(account[from_account_index-1].current_balance() > amountt){
                    account[from_account_index-1].MoneyTran(account[to_account_index-1]);

                }
                else{
                    cout<<"Account "<< from_account_index-1<<" has insufficient balance for transfer."<<endl;
                    }
                
                break;
            case 4:
                cout<<"Enter the index of the account to deposit into (1 to "<<n<<"): ";
                int deposit_account_index;
                cin>>deposit_account_index;
                account[deposit_account_index-1].Deposit();
                break;
            case 5:
                cout<<"Enter the index of the account to withdraw from (1 to "<<n<<"): ";
                int withdraw_account_index;
                cin>>withdraw_account_index;


                double amounte;
                cout<<"Enter the amount to withdraw: ";
                cin>>amounte;

                cout<<"Enter the index of the account to withdraw from (1 to "<<n<<"): ";
               
                cin>>withdraw_account_index;
                account[withdraw_account_index-1].withdraw();
                
                break;
            case 6:
                for(int i=0; i<n; i++){
                    account[i].input();
                }
                break;    
            case 7:
                cout<<"Exiting the program..."<<endl;
                break;
            default:
                cout<<"Invalid choice! Please try again."<<endl;
        }
    }while(choice!=7);

    return 0;
}