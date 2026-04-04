#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *arr;
    int size;
    
        vector( int m){
            size = m;
            arr = new T[size];
        }

        T dotProduct(vector &v){
            T d = 0;
            for( int i=0; i<size; i++){
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};

int main(){
vector<int> v1(3);
v1.arr[0] = 1;  
v1.arr[1] = 2;
v1.arr[2] = 3;

vector<int> v2(3);
v2.arr[0] = 4;
v2.arr[1] = 5;
v2.arr[2] = 9;

cout << "Dot Product: " << v1.dotProduct(v2) << endl;

vector<double> v3(3);
v3.arr[0] = 1.1;  
v3.arr[1] = 9.9;
v3.arr[2] = 3.0;

vector<double> v4(3);
v4.arr[0] = 3.3;
v4.arr[1] = 4.4;
v4.arr[2] = 5.5;

cout << "Dot Product: " << v3.dotProduct(v4) << endl;
    return 0;
}