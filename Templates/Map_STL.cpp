#include<iostream>
#include<map>
#include<string>
using namespace std;

//Map is an associative array 
int main(){
    map<string , int> MarksMap;
    MarksMap["Nirbhay"]=94;
    MarksMap["Akshay"]=96;
    MarksMap["Dhrumit"]=99;

    MarksMap.insert({{"Divyesh", 99},{"Harsil", 94}});
    map <string , int> :: iterator iter;
    for(iter=MarksMap.begin(); iter!=MarksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

    cout<<"Size of the map: "<<MarksMap.size()<<endl;
    cout<<"Max size of the map: "<<MarksMap.max_size()<<endl;
    cout<<"Empty or not: "<<MarksMap.empty()<<endl;
    return 0;
}