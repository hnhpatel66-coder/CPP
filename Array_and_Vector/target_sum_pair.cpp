#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int arr[n];
    int targetsum;


    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
    }

    cout<<endl<<"Enter Targetsum: ";
    cin>>targetsum;


    int pair=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==targetsum){
                pair++;
                cout<<(i,j)<<endl;
            }
        }
    }
    cout<<"Pair is "<<pair;
    return 0;
}