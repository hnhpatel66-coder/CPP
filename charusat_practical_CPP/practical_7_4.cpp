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
};

int main(){

    Rectangle r1(3.3 , 5.5);
    Circle c1(3.9);

    r1.area();
    c1.area();

    return 0;
}