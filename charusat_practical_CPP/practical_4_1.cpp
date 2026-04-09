#include <iostream>
using namespace std;
class dynamicarray
{
    int *arr;
    int size;

public:
    dynamicarray()
    {
        arr = nullptr;
        size = 0;
    }
    void insternew(int val)
    {

        int *newarray = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            newarray[i] = arr[i];
        }
        newarray[size] = val;
        delete[] arr;
        arr = newarray;
        size++;
    }
    void remove(int p)
    {
        if (size == 0)
        {
            cout << "Array is empty";
            return;
        }
        if (p < 0 || p >= size)
        {
            cout << "Invalid position"<<endl;
            return;
        }
        int *newarray = new int[size - 1];
        for (int i = 0, j = 0; i < size; i++)
        {
            if (i != p)
            {
                newarray[j++] = arr[i];
            }
        }
        delete[] arr;
        arr = newarray;
        size--;
    }
    void insterat(int p, int val)
    {
        if (p < 0 || p > size)
        {
            cout << "Invalid position"<<endl;
            return;
        }
        int *newarray = new int[size + 1];
        for (int i = 0, j = 0; i < size + 1; i++)
        {
            if (i == p)
            {
                newarray[i] = val;
            }
            else
            {
                newarray[i] = arr[j++];
            }
        }
        delete[] arr;
        arr = newarray;
        size++;
    }
    void serch(int val)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == val)
            {
                cout << "number found at position: " << i << endl;
                return;
            }
        }
        cout << "number not found"<<endl;
    }
    void count(int val)
    {
        int count = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == val)
            {
                count++;
            }
        }
        cout << "Count of " << val << ": " << count << endl;
    }
    void display()
    {
        if (size == 0)
        {
            cout << "Array is empty"<<endl;
            return;
        }
        cout << "Array: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    dynamicarray c1;
    // int n;
    // cout<<"Enter value of N: ";
    // cin>>n;
    // for (int i = 1; i <= n; i++)
    // {
    //     c1.insternew(i * 10);
    // }
    // c1.display();
    // c1.insternew(33);
    // c1.display();
    // c1.remove(7);
    // c1.display();
    // c1.insterat(3, 33);
    // c1.display();
    // c1.serch(99);
    // c1.display();
    // c1.count(19);

    int k;
    cout<<"Enter value of K: ";
    cin>>k;

    for (int i = 1; i <= k; i++)
    {
        c1.insternew(i * 10);
    }
    c1.display();
    
    int choice;
    do{
        cout<<"-------------------------MENU----------------------------"<<endl;
        cout<<"1. Display "<<endl;
        cout<<"2. Remove"<<endl;
        cout<<"3. Inserternew "<<endl;
        cout<<"4. insterat "<<endl;
        cout<<"5. serch "<<endl;
        cout<<"6. count "<<endl;
        cout<<"7. Exit!!!"<<endl;
        cout<<"Enter your Choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1:
                c1.display();
            break;
        case 2:
                int m;
                cout<<"Enter Remove digits: ";
                cin>>m;
                c1.remove(m);
                
            break;
        case 3:
                int b;
                cout<<"Enter Inserternew digits: ";
                cin>>b;
                c1.insternew(b);
            break;
        case 4:
                int a;
                cout<<"Enter Insterate digits: ";
                cin>>a;

                int idx;
                cout<<"Enter Insterate Index: ";
                cin>>idx;

                c1.insterat(idx,a);
 
            break;
        case 5:
                int n;
                cout<<"Enter serch digits: ";
                cin>>n;
                c1.serch(n);
            break;
        case 6:
                int c;
                cout<<"Enter count digits: ";
                cin>>c;
                c1.count(c);
            break;
        case 7:
                cout<<"Exit!!!"<<endl;
            break;                    
        default: cout<<"Invalid Choice "<<endl;
            break;
        }
    }while (choice!=7);
    
    return 0;
}