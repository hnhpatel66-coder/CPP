#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter n:";
    cin>>n;
    int size = 0;
    int* arr = nullptr;

    // Insert n elements
    for(int i=0;i<n;i++) {
        int* temp = new int[size+1];
        for(int j=0;j<size;j++){
            temp[j] = arr[j];
        }
        temp[size] = i+1;
        delete[] arr;
        arr = temp;
        size++;
    }

    // Display
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }    

    delete[] arr;
}