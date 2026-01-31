#include<iostream>
using namespace std;

/*
### INHERITANCE ###
student -->test
student -->sports
test -->result
sports -->result
*/
class Student{
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void print_marks(void){
            cout<<"You result is here: "<<endl
                <<" Maths: "<<maths<<endl
                <<"Pjysics: "<<physics<<endl;
        }
};

class Sports : virtual public Student{
    protected:
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }

        void print_score(void){
            cout<<"You PT Score is: "<<score<<endl;
        
        }
};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        void display(void){
            total = maths + physics + score;
        }

        void print_score(void){
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;
        }
};

int main(){
Result Nirbhay;
    Nirbhay.set_number(220834);
    Nirbhay.set_marks(94.1, 91.13);
    Nirbhay.set_score(86.33);
    Nirbhay.display();

    return 0;
}