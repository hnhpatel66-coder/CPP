#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter Number: ";
cin>>n;

int sum=0;

for(int i=1; i<n; i++){
    if(n%i==0){
        sum+=i;
    }
}
if(n==sum){
    cout<<n<<" is Perfact Number";
}
else{
    cout<<n<<" is Not Perfact Number";
}
}