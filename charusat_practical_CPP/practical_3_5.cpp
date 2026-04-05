#include<iostream>
using namespace std;    

// int main(){
//     int k;
//     cout<<"Enter value of K: ";
//     cin>>k;

//     int arr[k];

//     for(int i=0; i<k; i++){
//         cin>>arr[i];
      
//     }

//     for(int j=0; j<k; j++){
//         cout<<arr[j]<<" ";
//     }
//     cout<<endl;

//     int sum=0;
//     for(int i=0; i<k; i++){
//         sum+=arr[i];
//     }

//     sum*=k;
//     cout<<"Sum of digits: "<<sum<<endl;

//     int super_digit=0;
//     for(int i=0; i<k; i++){
//         super_digit+=sum%10;
//         sum/=10;
//     }
//     cout<<"Super Digit: "<<super_digit<<endl;
//     return 0;
// }

int main(){
    int N;
    cout<<"Enter value of N: ";
    cin>>N;

    string s;
    cout<<"Enter a string: ";
    cin>>s;


    int sum=0;
    for(int i=0; i<s.length(); i++){
        sum+=s[i]-'0';
    }

    sum*=N;
    cout<<"Sum : "<<sum<<endl;

    int super_digit=0;

    for(int i=0; i<s.length(); i++){
        super_digit+=sum%10;
        sum/=10;
    }
    cout<<"Super Digit: "<<super_digit<<endl;

    return 0;

}