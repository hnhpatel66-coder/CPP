#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v={11,22,33};
    
    cout<<"Vector Size: "<<v.size()<<endl; //3

    int n;
    cout<<"Enter n elements: ";
    cin>>n;

    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //cout<<sizeof(v); //12
    cout<<"Vector Size: "<<v.size()<<endl; //for n=3; 6
    // cin>>n>>m>>k;
    // v.push_back(n);
    // v.push_back(m);
    // v.push_back(k);
    
    cout<<"Elements: ";
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+1, 55); 

    cout<<"Elements: ";
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;

    // using vector through reverse iterator
    cout<<"using vector Reversed Elements: "<<endl;  
    for(auto t = v.rbegin(); t!= v.rend(); t++) {
        cout<<*t<<" ";
    }
    cout<<endl;

    //using manually reverse iterator
    cout<<"Manually Reversed Elements: "<<endl;
    for(int i = v.size() - 1; i >= 0; i--) {
        cout<<v[i]<< " ";
    }
    return 0;
}