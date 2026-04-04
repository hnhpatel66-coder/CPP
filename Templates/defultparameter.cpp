#include<iostream>
using namespace std;

template <class T1=int, class T2=double>
class myClass{
    public:
    T1 data1;
    T2 data2;
    
    void display(){
        cout <<"The value of data1 is: " << data1 << endl;
        cout <<"The value of data2 is: " << data2 << endl;
    }
     myClass(T1 a, T2 b){
        data1 = a;
        data2 = b;
    }
};  

int main(){
    myClass<> obj(5, 3.14); // Using default template parameters
    obj.display();
cout<<endl;
    myClass< char> obj2(33, 'A'); // Using custom template parameters
    obj2.display();
    return 0;
}