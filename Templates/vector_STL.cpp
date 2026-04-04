#include<iostream>
#include<vector>
using namespace std;
//STL = Standar Template Library
//Componts of STL:
//(1.) containers
//(2.) algorithem;
//(3.) itretors

template <class T>
T display(vector<T> &v){
    cout<<"Displaying the vector: "<<endl;
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
}

int main(){
    vector<int>vec1; // zero length vector
    vector<char>vec2(5);
    // vec2.push_back('A');
    // display(vec2);

    // cout<<endl;
    // vector<char>vec3(vec2); //vector of size 5 and all elements are null
    // display(vec3);
    // vector<int>v(3,9);//3 elements of value 9

    vector<int>vec4(3,13); //copy of vec1
    display(vec4);  
    cout<<endl;
    cout<<"Size of vec4: "<<vec4.size()<<endl;
    // out put:
    // Displaying the vector: 
    // 13 13 13
    // Size of vec4: 3

// int size=5;
// int element;
// cout<<"Enter the size of the vector: "; 
// cin>>size;
//     for(int i=0;i<size;i++){
//         cout<<"Enter an Element to add to the vector: ";
//         cin>>element;
//         vec1.push_back(element);
//     }
    //vec1.pop_back(); //removes the last element of the vector
    // display(vec1);
    // cout<<endl;
    // vector<int> :: iterator iter = vec1.begin(); //iterator pointing to the first element of the vector
    // vec1.insert(iter+1, 3 ,99); //inserts 99 at the position of iter+1 
    // display(vec1);
return 0;
}