#include<iostream>
#include<limits.h>
using namespace std;
int largestElementIdx(int arr[], int size){
    int max=INT_MIN;
    int maximumidx=-1;
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
            maximumidx=i;
        }
    }
    return maximumidx;
}

int main(){

    int n;
    cout<<"Enter Size of array: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n;i++){
    cin>>arr[i];
    }

    for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
    }

    int indexoflargest=largestElementIdx(arr,n);
    cout<<endl<<"Largest Element is "<<arr[indexoflargest];

    int largestelement=arr[indexoflargest];
    for(int i=0; i<n;i++){
        if(arr[i]==largestelement){
            arr[i]=-1;
        }
    }

    int indexofsecondlargest=largestElementIdx(arr,n);

    cout<<endl<<"Second Largest Element is "<<arr[indexofsecondlargest];
    return 0;
}