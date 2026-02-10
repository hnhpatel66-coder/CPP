#include<iostream>
#include<string>
using namespace std;

class payroll_system{
    private:
        string name;
        double basic_salary;
        double bonus_amount;
    public:
        payroll_system(){
            name="***";
            basic_salary=0;
            bonus_amount=0;
        }
        payroll_system(string n, double salary, double bonus){
            name=n;
            basic_salary=salary;
            bonus_amount=bonus;
        }
        
        void Display(){
        cout<<"Enter Name: "<<name<<endl;
        cout<<"Enter basicSalary: "<<basic_salary<<endl;
        cout<<"Enter bonusAmount: "<<bonus_amount<<endl;
        cout<<"Total Slary: "<<calculat_salary()<<endl;
        cout<<"Employ Gread: "<<grade();
        }
    inline int calculat_salary(){
        return (basic_salary + bonus_amount);
    }
    
    string grade(){
        double total = calculat_salary();
        if (total >= 50000){
            return "A";
        }
        else if (total >= 30000){
            return "B";
        }
        else{
            return "C";
        }
    }

    void update_Bonus(double newBonus) {
        if (newBonus >= 0)
           bonus_amount = newBonus;
    }
};

int main(){
int n;
cout<<"Enter Nuber of Employ: ";
cin>>n;
int choice;

payroll_system employe[n];

do{

    cout << " 1. Add Employee and Slary Details" << endl;
    cout << " 2. Display Employee Salary Details" << endl;
    cout << " 3. Update Employee Bonus" << endl;
    cout << " 4. Add  details of employee" << endl;
    cout << " 6. Exit" << endl;
    cout << "Enter your choice: ";
    cin>>choice;

    switch(choice){
    
    case 1: {
        string name;
            double salary, bonus;
            cout << "Enter details for new Employee:" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Basic Salary: ";
            cin >> salary;
            cout << "Bonus (default is 2000): ";
            cin >> bonus;
            employe[n] = payroll_system(name, salary, bonus);
            n++;
    }
        break;
    case 2:
    {
        cout<<"\nEmployee Details:\n";
            for (int i = 0; i < n; i++)
            {
                employe[i].Display();
            }
    }
        break;
    case 3:
    {
        int index;
            double new_bonus;
            cout << "Enter index of employee to update bonus: ";
            cin >> index;
            if (index >= 1 && index <= n)
            {
                cout << "Enter new bonus: ";
                cin >> new_bonus;
                employe[index - 1].update_Bonus(new_bonus);
                cout << "Bonus updated successfully." << endl;
            }
    }
        break; 
        
    case 4:
    {
        string name;
            double salary, bonus;
            int i;
            cout << "Enter index of employee to add details (1 to " << n << "): ";
            cin >> i;
            if (i < 1 || i > n)
            {
                cout << "Invalid index!" << endl;
                break;
            }
            cout << "Enter details for Employee " << i << ":" << endl;
            cout << "Name: ";
            cin >> name;
            cout << "Basic Salary: ";
            cin >> salary;
            cout << "Bonus (default is 2000): ";
            cin >> bonus;
            employe[i - 1] = payroll_system(name, salary, bonus);
    }
        break; 
    default: 
        cout<<"Invalide Case!!!";
    }
}while(choice!=0);

    return 0;
}