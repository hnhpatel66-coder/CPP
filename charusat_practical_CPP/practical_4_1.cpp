#include <iostream>
using namespace std;
class dynamicarray
{
    int *arr;
    int size;

public:
    dynamicarray()
    {
        arr = '\0';
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

    int n;
    cout<<"Enter value of N: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        c1.insternew(i * 10);
    }
    c1.display();
    c1.insternew(33);
    c1.display();
    c1.remove(7);
    c1.display();
    c1.insterat(3, 33);
    c1.display();
    c1.serch(99);
    c1.display();
    c1.count(19);
    return 0;
}