#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);

    // for loop
    for(int i=0;i<v.size(); i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter X: ";
    cin>>x;

    int occurence=0;
    for(int ele:v){
        if(ele==x){
            occurence++;
        }
    }
    cout<<occurence<<endl;
return 0;
}