#include<iostream>
#include<cmath>
using namespace std;

class  manage_loan_accounts{
    private:
        int Loan_ID;
        string Applicant_name;
        double Total_loan_amount;
        double Annual_interest_rate;
        int Loan_tenure_months;

        public:
        //Defult Constructor
            manage_loan_accounts(){
            Loan_ID=0;
            Applicant_name="***";
            Total_loan_amount=0;
            Annual_interest_rate=0;
            Loan_tenure_months=0;
            }

            //Parramitrize Constructor
            manage_loan_accounts(int id, string name, double amount, double rate, int tenure){
                if(amount>0 && rate >0 && tenure>0){
                Loan_ID=id;
                Applicant_name=name;
                Total_loan_amount=amount;
                Annual_interest_rate=rate;
                Loan_tenure_months=tenure;
                }
                else{
                    cout<<"Invalid loan details provided!";
                }      
            }

            double calculat_EMI();
            void DisplayallDetails();
            double Repayment();
};

double calculat_EMI (){
    double R = Annual_interest_rate / (12 * 100);
    double EMI= (pow(Total_loan_amount * R * ( 1 + R ),T))/ pow((1+R), T ) - 1;

}

void manage_loan_accounts:: DisplayallDetails() {
        cout << "___________________________________________________________________" << endl;
        cout << "Loan ID: " <<Loan_ID<< endl;
        cout << "Applicant Name: " <<Applicant_name<< endl;
        cout << "Loan Amount: " <<Total_loan_amount<< endl;
        cout << "Annual Interest Rate: " <<Annual_interest_rate<< "%" << endl;
        cout << "Loan Tenure (Months): " <<Loan_tenure_months<< endl;
        cout << "Monthly EMI: " <<calculat_EMI()<< endl;
        cout << "Total Repayment: " <<Repayment()<< endl;
}

double manage_loan_accounts::Repayment(){
    double x= calculat_EMI() * Loan_tenure_months;
    return x;
}