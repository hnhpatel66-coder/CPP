#include<iostream>
using namespace std;

int main(){
int n,m, i=0, j=0, k=0;;

    cout<<"Enter size of first array: ";
    cin>>n;

    cout<<"Enter size of second array: ";
    cin>>m;

    if(n <= 0 || m <= 0) {
        cout << "Invalid array size!" << endl;
        return 0;
    }

    int *arr1 = new int[n];
    int *arr2 = new int[m];
    int *merg= new int[m+n];

    cout << "Enter " <<n<< " sorted elements for array 1: ";
    for (int i=0; i<n; i++)
        cin>>arr1[i];
    
    cout << "Enter " <<m<< " sorted elements for array 2: ";
    for (int i=0; i<m; i++)
        cin>>arr2[i];

    while(i<n && j<m){
        if(arr1[i]<=arr2[j]){
            merg[k++]=arr1[i++];
        }else{
            merg[k++]=arr2[j++];
        }
    }

    while(i<n){
        merg[k++]=arr1[i++];
    }

    while(j<m){
        merg[k++]=arr2[j++];
    }

    for(int i=0; i<n+m; i++){
        cout<<merg[i]<<" ";
    }

    return 0;
}