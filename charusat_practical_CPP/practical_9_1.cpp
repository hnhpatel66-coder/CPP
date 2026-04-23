#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v={11,22,33};

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    // using vector through reverse iterator
    cout<<"Elements: ";
    for(int x : v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<"using vector Reversed Elements: ";  
    for (auto t = v.rbegin(); t!= v.rend(); t++) {
        cout<<*t<<" ";
    }
    cout<<endl;

    //using manually reverse iterator
    cout<<"Manually Reversed Elements: ";
    for (int i = v.size() - 1; i >= 0; i--) {
        cout<<v[i]<< " ";
    }
    return 0;
}