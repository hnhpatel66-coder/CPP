#include<iostream>
#include<list>
using namespace std;

//template <class T>
void display(list <int> &lst){
    cout<<"Displaying the list: "<<endl;
    list <int> :: iterator iter;

    for(iter=lst.begin(); iter!=lst.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
// 6 8 9
list<int> list1; // list of 0 length
list1.push_back(1);
list1.push_back(7);
list1.push_back(3);     
list1.push_back(11);
list1.push_back(8);
display(list1);

//list<int> list2(7); // list of 7 length and all elements are null
    list<int> list2(3); 
    list <int> :: iterator iter;
    iter=list2.begin();
    *iter=11;
    iter++; 
    *iter=19;
    iter++;
    *iter=17;
    iter++;
    display(list2);


   
    // removing elements from the list
    //list2.remove(19); //removes the element 19 from the list
    //list2.pop_front(); //removes the first element of the list
    //list2.pop_back(); //removes the last element of the list

    //sorting the list
    //list2.sort(); //sorts the list in ascending order

    // list1.swap(list2); //swaps the elements of list1 and list2
    // cout<<"After swapping: "<<endl;
    // display(list1);

    //list2.reverse(); //reverses the list

    // list1.merge(list2); //merges list2 into list1 and sorts the merged list
    // cout<<"After merging: "<<endl;
    // display(list1);

    list1.sort();
    list2.sort();
    list1.merge(list2);
    cout<<"After sorting and merging: ";
    display(list1);


    return 0;
}