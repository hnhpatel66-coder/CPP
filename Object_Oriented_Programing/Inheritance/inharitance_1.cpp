
#include <iostream>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;

    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }

    Employee() {}
};
// Derived Class Syntex
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
class member/methods/etc...
}
*/

/*
Note:
1. Default visibility mode is private
2. Public Visibility Mode: Public members of the base class become Public members of the derived class
3. Private Visibility Mode: Public members of the base class become Private members of the derived class
4. Private members are never inherited
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }

    int languageCode = 9;

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);

    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    skillF.getData();

    return 0;
}
