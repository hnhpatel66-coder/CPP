#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    int arr[n];
    int sum=0;

    for(int &element:arr){
        cin>>element;
    }

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum is "<<sum;
    return 0;
}