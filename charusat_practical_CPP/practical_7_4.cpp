#include<iostream>
using namespace std;

class Shape{
    protected:
    public:
        virtual void area()=0;
};

class Rectangle: public Shape{
    private:
        float length,breadth;
    public:
        Rectangle():length(0),breadth(0){}
        Rectangle(float l,float b): length(l),breadth(b){}

        void area(){
            cout<<"Area of Rectangle: "<<length*breadth<<endl;
        }
        void RectangleInput(){
            cout<<"Enter Length: ";
            cin>>length;

            cout<<"Enter Breadth: ";
            cin>>breadth;
        }
};

class Circle: public Shape{
    private:
        float redius;
    public:

        Circle():redius(0){}
        Circle(float r):redius(r){}

        void area(){
            cout<<"Area of Circle: "<<3.14*redius*redius<<endl;
        }
        void CircleInput(){
            cout<<"Enter Redius: ";
            cin>>redius;
        }
};

int main(){

    // Rectangle r1(3.3 , 5.5);
    // Circle c1(3.9);

    // r1.area();
    // c1.area();

    int n,m;
    cout<<"Enter the Number of Circle: ";
    cin>>n;

    cout<<"Enter the Number of Rectangale: ";
    cin>>m;

    Rectangle r[m];
    Circle c[n];
    int choice;
    do{
        cout<<"----------------------WELCOME-----------------------"<<endl;
        cout<<"1. Circle Area "<<endl;
        cout<<"2. Ractangle Area "<<endl;
        cout<<"3. Input of Redius "<<endl;
        cout<<"4. Input of Length and Breadth "<<endl;
        cout<<"5. Exit"<<endl;

        cout<<"Enter Choice "<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1:
                for(int i=0; i<n; i++){
                    c[i].area();
                }
            break;
        case 2:
                for(int i=0; i<m; i++){
                    r[i].area();
                }
                break;
        case 3:
                for(int i=0; i<n; i++){
                    c[i].CircleInput();
                }
                break;
        case 4:
                for(int i=0; i<m; i++){
                    r[i].RectangleInput();
                }
                break;        
        case 5:
                cout<<" EXIT "<<endl;
                break;
        default:
                cout<<"Invelide Choice "<<endl;
            break;
            }    
    }while(choice!=5);
    
    return 0;
}