#include<iostream>
using namespace std;

template <class T>
class Nirbhay{
    public:
        T Data1;
        Nirbhay(T a): Data1(a){}
        // T display(){
        //     cout<<"Data1 : "<<Data1<<endl;
        // }
        T display();
};

template <class T>
T Nirbhay<T> :: display(){
    cout<<"Data1 : "<<Data1<<endl;
}


void func(int  a){
    cout<<"I am first fun() "<<a<<endl;
}

template <class T>
T func(T a){
    cout<<"This is Teemplateize  fun() "<<a<<endl;
}

int main(){
    // Nirbhay <int> N(9);
    // N.display();
    // cout<<N.Data1;

    func(9); // Exact Match Take Hight priyority
return 0;
}