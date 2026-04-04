#include<iostream>
using namespace std;

//multiple parameters in template class syntex:
// template <class T1, class U1>
// class nameOfClass{
//     code
// }

template <class T1, class U1>
class myClass{
    public:
    T1 data1;
    U1 data2;
    
    myClass(T1 a, U1 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout << data1 << " " << data2 << endl;
    }
};
int main(){

    myClass<int, string> obj(3, "Hello");
    obj.display();
    return 0;
}