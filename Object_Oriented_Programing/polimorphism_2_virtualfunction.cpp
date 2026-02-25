<<<<<<< HEAD
#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        virtual void display(){
            cout<<"1. Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"2. Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2. Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 33;
    //base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    return 0;
=======
#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base;
        virtual void display(){
            cout<<"1. Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"2. Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"2. Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // Pointing base class pointer to derived class

    base_class_pointer->var_base = 33;
    //base_class_pointer->var_derived= 134; // Will throw an error
    base_class_pointer->display();

    return 0;
>>>>>>> c7c47d65d79172223108818bc63b148f81954b87
}