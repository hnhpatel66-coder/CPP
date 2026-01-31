#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    int arr[n];
    //int max=arr[0];
    int max=INT_MIN;
    // for(int &element:arr){
    //     cin>>element;
    // }

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"Maximum Number of Array in "<<max;
    return 0;
}