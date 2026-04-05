#include<iostream>
using namespace std;

class Student{
protected:
    float marks[3];
public:
    virtual void Grade()=0;
};

class Undergraduate : public Student{
public:
    float p=0, pr;

    void input(){
        p = 0;  // reset जरूरी
        cout<<"Enter Marks: ";
        for(int i=0; i<3; i++){
            cin>>marks[i];
            p += marks[i];
        }

        pr = p / 3;   // class variable update
        cout<<"Your Percentage: "<<pr<<endl;
    }

    void Grade(){
        if(pr > 90){
            cout<<"A+ Grade"<<endl;
        }
        else if(pr > 80){
            cout<<"A Grade"<<endl;
        }
        else if(pr > 70){
            cout<<"B+ Grade"<<endl;
        }
        else if(pr > 60){
            cout<<"B Grade"<<endl;
        }
        else if(pr > 50){
            cout<<"C+ Grade"<<endl;
        }
        else if(pr >= 33){
            cout<<"C Grade"<<endl;
        }
        else{
            cout<<"You are Fail"<<endl;
        }
    }
};

class Postgraduate : public Student{
public:
    float cgpa;

    void input(){
        float pr = 0;
        cout<<"Enter Marks: ";
        for(int i=0; i<3; i++){
            cin>>marks[i];
            pr += marks[i];
        }

        cgpa = (pr / 3) / 10;   // class variable update
        cout<<"Your CGPA: "<<cgpa<<endl;
    }

    void Grade(){
        if(cgpa > 9.5 && cgpa <= 10){
            cout<<"O Grade"<<endl;
        }
        else if(cgpa > 8.5){
            cout<<"A+ Grade"<<endl;
        }
        else if(cgpa > 8.0){
            cout<<"A Grade"<<endl;
        }
        else if(cgpa > 7.0){
            cout<<"B Grade"<<endl;
        }
        else if(cgpa > 6.0){
            cout<<"C+ Grade"<<endl;
        }
        else if(cgpa > 5.0){
            cout<<"C Grade"<<endl;
        }
        else{
            cout<<"You are Fail"<<endl;
        }
    }
};

int main(){
    Undergraduate s1;
    Postgraduate s2;

    s1.input();
    s1.Grade();

    s2.input();
    s2.Grade();

    return 0;
}