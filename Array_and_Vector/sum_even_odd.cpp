#include<iostream>
#include<vector>
using namespace std;

int main(){
int n;
cout<<"Enter Size of Array: ";
cin>>n;
int arr[n];

    // for loop
    for(int i=1;i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n; i++){
        cout<<arr[i]<<" ";
    }    
    int sum_of_evenidx=0;
    int sum_of_oddidx=0;

    for(int i=1; i<=n; i++){
        if(i%2==0){
            sum_of_evenidx+=arr[i];
        }
        else{
            sum_of_oddidx+=arr[i];
        }
    }
    cout<<endl<<"Sum of Array is "<<sum_of_evenidx-sum_of_oddidx<<endl;
    return 0;
}