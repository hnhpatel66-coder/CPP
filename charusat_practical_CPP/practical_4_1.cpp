#include <iostream>
using namespace std;

class dynamicarray{
    private:
        int *arr;
        int size;
    public:
        dynamicarray(){
            arr=0;
            size=0;
        }

        void insertnew(int val){

        }

};

int main() {
    dynamicarray c1;
    c1.insternew(9);
    c1.display();
    c1.insternew(11);
    c1.display();
    c1.insternew(33);
    c1.display();
    c1.insternew(19);
    c1.display();
    c1.insternew(15);
    c1.display();
    c1.remove(17);
    c1.display();
    c1.insterat(3, 19);
    c1.display();
    c1.serch(39);
    c1.count(91);
    return 0;
}