#include<iostream>
using namespace std;

class GradSystem{
    protected:
        float marks[3];
    public:
        virtual void Grade()=0;

};

class Undergraduate : public GradSystem{
    private:
    public:

    float p=0,pr;

        void input(){
            cout<<"Enter Marks: ";
            for(int i=0; i<3; i++){
                cin>>marks[i];
                p+=marks[i];
            }
            pr=p/3;
            cout<<"Your Percentage: "<<pr<<endl;
        }

        void Grade(){
            if(pr>90 && 100>=pr){
                cout<<"A+ Grade"<<endl;
            }
            else if(pr>80 && 90>=pr){
                cout<<"A Grade"<<endl;
            }
            else if(pr>70 && 80>=pr){
                cout<<"B+ Grade"<<endl;
            }
            else if(pr>60 && 70>=pr){
                cout<<"B Grade"<<endl;
            }
            else if(pr>50 && 60>=pr){
                cout<<"C+ Grade"<<endl;
            }
            else if(pr>=33 && 50>=pr){
                cout<<"C Grade"<<endl;
            }
            else if(pr<=32 && pr<=0.0){
                cout<<"You are Fail"<<endl;
            }
            
}
};

class Postgraduate : public GradSystem{
    private:
    public:
    float cgpa;

        void input(){
            float pr=0;
            cout<<"Enter Marks: ";
            for(int i=0; i<3; i++){
                cin>>marks[i];
                pr+=marks[i];
            }

            cgpa = ((pr/3)/10);
            cout<<"Your CGPA: "<<cgpa<<endl;
        }

        void Grade(){
            if(cgpa>9.5 && 10>=cgpa){
                cout<<"O Grade"<<endl;
            }
            else if(cgpa>85 && 9.5>=cgpa){
                cout<<"A+ Grade"<<endl;
            }
            else if(cgpa>8.0 && 8.5>=cgpa){
                cout<<"A Grade"<<endl;
            }
            else if(cgpa>7.0 && 8.0>=cgpa){
                cout<<"B Grade"<<endl;
            }
            else if(cgpa>6.0 && 7.0>=cgpa){
                cout<<"C+ Grade"<<endl;
            }
            else if(cgpa>5.0 && 60>=cgpa){
                cout<<"C Grade"<<endl;
            }
            else if(cgpa>=3.3 && 5.0>=cgpa){
                cout<<"C Grade"<<endl;
            }
            else if(cgpa<=3.2 && cgpa<=0.0){
                cout<<"You are Fail "<<endl;
            }
            
}
};

int main(){
Undergraduate s1;
Postgraduate s2;

s1.input();
s2.input();

s1.Grade();
s2.Grade();

    return 0;
}