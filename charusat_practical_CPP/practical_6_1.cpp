#include<iostream>
using namespace std;

class circle_base{
    protected:
        float redius;
    public:
        circle_base(float r){
            redius = r;
        }
        circle_base(){
            redius = 0.0;
        }

        void input(){
            cout<<"Enter the redius of circle: ";
            cin>>redius;
        }
};

class circle_area: public circle_base{
    protected:
    public:
    void area(){
        cout<<"Area of circle is: "<<3.14*redius*redius<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter the number of circle: ";
    cin>>n;

    circle_area *circle = new circle_area[n];

    for(int i=0; i<n; i++){
        circle[i].input();
    }
    cout<<"------------------------------------------------------"<<endl;
    for(int j=0; j<n; j++){
        cout<<"area  of the circle: ";
        circle[j].area();
    }
    cout<<"------------------------------------------------------"<<endl;
    return 0;
    
}