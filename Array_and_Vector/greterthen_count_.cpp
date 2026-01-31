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
    int count=0;

    // for(int i=0;i<v.size(); i++){
    //     if(v[i]>x){
    //         cout<<v[i]<<" ";
    //         count++;            
    //     }
    // }

    // for each loop
    
    for(int ele:v){
        if(ele>x){
            cout<<ele<<" ";
            count++;
        }
    }
    cout<<endl<<"x Greterten element is "<<count<<endl;
return 0;
}