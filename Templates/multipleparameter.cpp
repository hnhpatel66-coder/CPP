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
    T data1;
    U data2;
     myClass(T a, U b){
    }
};
int main(){

    return 0;
}