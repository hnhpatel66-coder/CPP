#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

// Link: cppreference.com 
int main(){
// Function Objects (Functors): Function Wrapped in a class so that it available like an object
int arr[] = {99, 94, 83, 96, 93};

    sort(arr, arr+5); //sorts the array in ascending order

    cout<<"Sorted array in ascending order: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sort(arr, arr+5, greater<int>()); //sorts the array in descending order
    cout<<"Sorted array in descending order: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}