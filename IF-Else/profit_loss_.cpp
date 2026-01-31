#include<iostream>
using namespace std;

int main(){
int sp,cp;

cout<<"Enter Selling Price: ";
cin>>sp;

cout<<"Enter Cost Price: ";
cin>>cp;

if(sp>cp){
    int profit = sp - cp;
    cout<<"Your Profit is "<<profit<<endl;
}
else if(cp>sp){
    int loss = cp - sp;
    cout<<"Your Loss is "<<loss<<endl;
}
else{
    cout<<"No Profit or Loss ";
}
return 0;
}