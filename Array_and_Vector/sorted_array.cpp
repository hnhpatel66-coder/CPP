#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cout<<"Enter Size of Array: ";
cin>>n;
int arr[n];

    // for loop
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }    
    bool sortedflag=true;
    for(int i=1; i<n; i++){
        if(arr[i]>=arr[i-1]){
            sortedflag=true;
        }
    }

    cout<<endl<<sortedflag<<endl;
    return 0;
}