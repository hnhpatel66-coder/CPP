#include <iostream>
#include <cmath>
using namespace std;
class Loan_EMI_Management_System
{
    string Loan_ID;
    string Applicant_Name;
    double Total_Loan_Amount;
    double Annual_Interest_Rate;
    int Loan_Tenure_Months;

public:
    Loan_EMI_Management_System()
    {
        Loan_ID = "00000000";
        Applicant_Name = "Default Applicant";
        Total_Loan_Amount = 0;
        Annual_Interest_Rate = 0;
        Loan_Tenure_Months = 0;
    }
    Loan_EMI_Management_System(string id, string name, double amount, double interest_rate, int tenure)
    {
        Loan_ID = id;
        Applicant_Name = name;
        Total_Loan_Amount = amount;
        Annual_Interest_Rate = interest_rate;
        Loan_Tenure_Months = tenure;
    }
    double calc_intrest()
    {
        double monthly_interest_rate = Annual_Interest_Rate / 12 / 100;
        double emi = (Total_Loan_Amount * monthly_interest_rate * pow(1 + monthly_interest_rate, Loan_Tenure_Months)) / (pow(1 + monthly_interest_rate, Loan_Tenure_Months) - 1);
        cout << "---------------------------------------------------------" << endl;
        cout << " Total monthly EMI is: " << emi << endl;
        cout << "Total Interest for Loan ID " << Loan_ID << " is: " << (emi * Loan_Tenure_Months) - Total_Loan_Amount << endl;
        cout << "Total repayment for Loan ID " << Loan_ID << " is: " << (emi * Loan_Tenure_Months) << endl;
        return (emi * Loan_Tenure_Months) - Total_Loan_Amount;
    }
    void display_details()
    {
        cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
        cout << "Loan ID: " << Loan_ID << endl;
        cout << "Applicant Name: " << Applicant_Name << endl;
        cout << "Total Loan Amount: " << Total_Loan_Amount << endl;
        cout << "Annual Interest Rate: " << Annual_Interest_Rate << "%" << endl;
        cout << "Loan Tenure (Months): " << Loan_Tenure_Months << endl;
        calc_intrest();
    }
    void higest_emi(int n, Loan_EMI_Management_System[]){
        int max=0;
        int ans;
        int x =(emi * Loan_Tenure_Months) - Total_Loan_Amount;
        for(int i=0; i<n; i++){
            if(x>max){
                ans = loans[i];
            }
        }
        cout<<"your higst Emi is "<<ans<<endl;
    }
    
};
int main()
{
    int n;
    cout << "Enter the number of loans: ";
    cin >> n;
    Loan_EMI_Management_System loans[n];
    int k;
    cout << "***************************************************************" << endl;
    cout << "************ Welcome to Loan EMI Management System ************" << endl;
    cout << "***************************************************************" << endl;
    do
    {
        cout << " 1. Add Loan Details" << endl;
        cout << " 2. Display Loan Details" << endl;
        cout << " 3. Update Loan Details" << endl;
        cout << " 4. Calculate EMI and Interest" << endl;
        cout << " 5. Find Highest and Second Highest EMI" << endl;
        cout << " 6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> k;
        switch (k)
        {
        case 1:
        {
            cout << "You have chosen to add loan details." << endl;
            cout << "ENtre index of loan to add details (1 to " << n << "): ";
            int i;
            cin >> i;
            i = i - 1;

            string id, name;
            double amount, interest_rate;
            int tenure;
            cout << "***************************************************************" << endl;
            cout << "Enter details for Loan " << i + 1 << ":" << endl;
            cout << "Loan ID: ";
            cin >> id;
            cout << "Applicant Name: ";
            cin >> name;
            cout << "Total Loan Amount: ";
            cin >> amount;
            cout << "Annual Interest Rate: ";
            cin >> interest_rate;
            cout << "Loan Tenure (Months): ";
            cin >> tenure;
            loans[i] = Loan_EMI_Management_System(id, name, amount, interest_rate, tenure);
        }
        break;
        case 2:
            cout << "You have chosen to display loan details." << endl;
            for (int i = 0; i < n; i++)
            {
                loans[i].display_details();
            }
            break;
        case 3:
        {
            cout << "You have chosen to update loan details." << endl;
            cout << "Enter index of loan to update details (1 to " << n << "): ";
            int i;
            cin >> i;
            i = i - 1;
            string id, name;
            double amount, interest_rate;
            int tenure;
            cout << "***************************************************************" << endl;
            cout << "Enter updated details for Loan " << i + 1 << ":" << endl;
            cout << "Loan ID: ";
            cin >> id;
            cout << "Applicant Name: ";
            cin >> name;
            cout << "Total Loan Amount: ";
            cin >> amount;
            cout << "Annual Interest Rate: ";
            cin >> interest_rate;
            cout << "Loan Tenure (Months): ";
            cin >> tenure;
            loans[i] = Loan_EMI_Management_System(id, name, amount, interest_rate, tenure);
        }
        break;
        case 4:
        {
            cout << "You have chosen to calculate EMI and Interest." << endl;
            for (int i = 0; i < n; i++)
                loans[i].calc_intrest();
        }
        break;
        case 5:
        {
            loans[0].higest_emi(n, loans);
        }
        case 6:
            cout << "Exiting the program. Thank you!" << endl;
            break;
        }
    } while (k != 6);

    return 0;
}