#include<iostream>
#include<cstring>
using namespace std;

// An abstract base class is a class that is designed to be specifically used as a base class. An abstract base class contains at least one pure virtual function. A pure virtual function is a virtual function that is declared by assigning 0 in its declaration. It does not have a definition in the base class and must be overridden in the derived class. An abstract base class cannot be instantiated, but it can be used as a pointer or reference to an object of a derived class.
class HNH{
    protected:
            string title;
            float reting;
    public:
        HNH(string s, float r){
            title = s;
            reting = r;
        }
        virtual void display()=0; // do-nothing function --> pure virtual function
};

class HNHvideo : public HNH{
    float video_length;
    public:
        HNHvideo(string s, float r, float vl) : HNH(s, r){
            video_length = vl;
        }
        void display(){
            cout<<"The tital of the video is "<<title<<endl;
            cout<<"The reting of the video is "<<reting<<endl;
            cout<<"The length of the video is "<<video_length<<" minutes"<<endl;
        }
};


class HNHtext : public HNH{
    int words;
    public:
        HNHtext(string s, float r, int w) : HNH(s, r){
            words = w;
        }
        void display(){
            cout<<"The tital of the text is "<<title<<endl;
            cout<<"The reting of the text is "<<reting<<endl;
            cout<<"The number of words in the text is "<<words<<" words"<<endl;
        }
};
int main(){
    string title;
    float reting;
    float vlen;
    int words;

    //for video
    // tital= "Data Structure";
    // reting= 4.5;
    // vlen= 33.33; 

    cout<<"Enter the tital of the video: ";
    getline(cin, title);
    cout<<"Enter the reting of the video: ";    
    cin>>reting;
    cout<<"Enter the length of the video: ";
    cin>>vlen;
    HNHvideo hnhvideo(title, reting, vlen);
    //hnhvideo.display();

    cin.ignore(); 
    //for text
    // tital= "Data Structure textual";
    // words= 1111;
    // reting= 4.9;
    cout<<"Enter the tital of the text: ";
    getline(cin, title);   
    cout<<"Enter the reting of the text: ";
    cin>>reting;
    cout<<"Enter the number of words in the text: ";    
    cin>>words;
    HNHtext hnhtext(title, reting, words);
    // hnhtext.display();

    HNH* tuts[2];
    tuts[0] = &hnhvideo;
    tuts[1] = &hnhtext;

    tuts[0]->display();
    cout<<endl;
    tuts[1]->display();

    return 0;
}

// Rules for virtual functions
// 1. They cannot be static
// 2. They are accessed by object pointers
// 3. Virtual functions can be a friend of another class
// 4. A virtual function in base class might not be used.
// 5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class