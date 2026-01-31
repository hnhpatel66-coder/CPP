#include <iostream>

class Digital_Library{
private: // Data Member
    std::string Book_ID, Title, auther;
    int Total_Book;

public: // Member Function
    void input();
    void Display();
    void issue();
    void returnBook();
    void addnewBook();
};
void Digital_Library ::input()
{
    std::cout << "Book ID: ";         std::cin>>Book_ID;
    std::cout << "Title of Book: ";     std::cin>>Title;
    std::cout << "Name of auther: ";    std::cin>>auther;
    std::cout << "Total Book: ";        std::cin>>Total_Book;
}
void Digital_Library ::addnewBook(){
    std::cout << "Book ID: ";         std::cin>>Book_ID;
    std::cout << "Title of Book: ";     std::cin>>Title;
    std::cout << "Name of auther: ";    std::cin>>auther;
    std::cout << "Total Book: ";        std::cin>>Total_Book;
}
void Digital_Library ::Display()
{
    std::cout << "Book ID: " << Book_ID<<std::endl;
    std::cout << "Title of Book: " << Title<<std::endl;
    std::cout << "Name of auther: " << auther<<std::endl;
    std::cout << "Total Book: " << Total_Book<<std::endl;
}
void Digital_Library ::issue()
{
    if (Total_Book > 0){
        Total_Book--;
        std::cout<<"\n Book issued successfully";
    }
    else{
        std::cout<<"\n Book not available";
    }
}
void Digital_Library ::returnBook()
{
    Total_Book++;
    std::cout<<"\n Book Returned successfully";
}

int main(){
int n;
std::cout<<"Enter Number of Book: ";
std::cin>>n;

    Digital_Library B[n];

    for (int i = 0; i < n; i++)
    {
        B[i].input();
    }
    for (int i = 0; i <n; i++)
    {
        B[i].Display();
    }
    for (int i = 0; i < n; i++)
    {
        B[i].issue();
    }
    for (int i = 0; i < n; i++)
    {
        B[i].Display();
    }
    for (int i = 0; i < n; i++)
    {
        B[i].returnBook();
    }    
    for (int i = 0; i < n; i++)
    {
        B[i].Display();
    }
    int a;
    std::cout<<"Enter Number of add new Book: ";
    std::cin>>a;
    for (int i = 0; i < n; i++)
    {
        B[i].addnewBook();
    }
    for (int i = 0; i < a; i++)
    {
        B[i].Display();
    }
    return 0;
}