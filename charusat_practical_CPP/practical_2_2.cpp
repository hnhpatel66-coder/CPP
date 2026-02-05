#include<iostream>
using namespace std;

class Student_Record{
    private:   
            string rollnumber;
            string name;
            int marks[3];

    public: 
            void input();
            void display();
            void avgmarks();
};

void Student_Record::input(){
    cout<<"Enter Nmae :";             cin>>name;
    cout<<"Enter Roll Number: ";      cin>>rollnumber;
    cout<<"Enter 3 Marks: "<<endl;        
    for(int i=0; i<3; i++){
        cout<<"Enter"<<i+1<<" Marks:";
        cin>>marks[i];
    }
}

void Student_Record::avgmarks(){
    float sum=0;
    for(int i=0; i<3; i++){
    sum+=marks[i];
    }
    cout<<"| "<<sum/3.0<<endl;
}

void Student_Record::display(){
    cout<<"------------------------------------------------------------------------"<<endl;
    cout<<"RollNumber:       | Name:    | Marks:   | avgMarks:    "<<endl;
    cout<<rollnumber<<"            |"<<name<<"       |";
    // cout<<"Nmae :"<<name<<endl;                
    // cout<<"Roll Number: "<<rollnumber<<endl;     
    // cout<<"Enter 3 Marks: ";        
    for(int i=0; i<3; i++){
        cout<<marks[i]<<" ";
    }
    avgmarks();
}


int main(){
    
    Student_Record s[500];
    int n;
    cout<<"How Many record you want to record ?";
    cin>>n;

    cout<<endl<<"Creat Student Record: "<<endl;
    for(int i=0; i<n; i++){
        s[i].input();
    }

    cout<<endl<<"Display Student Record: "<<endl;
    for(int i=0; i<n; i++){
        s[i].display();
    }    

    // cout<<endl<<"Display Student Record: "<<endl;
    // for(int i=0; i<n; i++){
    //     s[i].;
    // }

    return 0;
}