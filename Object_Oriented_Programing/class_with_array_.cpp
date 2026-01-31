#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
    void initcounter(void){ counter=0;}
    void getPrice(void);
    void setPrice(void);
    void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter ID of your item No: "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter PRICE of your item: ";
    cin>>itemPrice[counter];  
    counter++;  
}

void shop :: displayPrice(void){
    for(int i=0; i < counter ; i++)
    {
        cout<<"The Price of item with ID "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main(){
    int n;
    cout<<" Enter Number: ";
    cin>>n;
shop dukan;
dukan.initcounter();
for(int i=1; i<n; i++){
    dukan.setPrice();
}
// dukan.setPrice();
// dukan.setPrice();
// dukan.setPrice();
dukan.displayPrice();
    return 0;                
}