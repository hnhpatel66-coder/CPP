#include<iostream>
using namespace std;

float moneyrecive(int currentmoney, float factor=1.04){  //float factor=1.04 => Defolt Value
    return currentmoney*factor;
}
int main(){
    int money;
    cin>>money;
    cout<<"If you have "<<money<<"Rs inyour bank account, you will recive "<<moneyrecive(money)<<" Rs after 1 Year"<<endl;
    cout<<"For VIP: If you have "<<money<<"Rs inyour bank account, you will recive "<<moneyrecive(money,1.1)<<" Rs after 1 Year";
    return 0;
}