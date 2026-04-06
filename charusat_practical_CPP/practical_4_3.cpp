#include<iostream>
using namespace std;

int main(){
int n,m;

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

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }

    int *merg= new int[m+n];

    int i=0, j=0, k=0;

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

    for(int i=0; i<m+n; i++){
        cout<<merg[i]<<" ";
    }

    return 0;
}