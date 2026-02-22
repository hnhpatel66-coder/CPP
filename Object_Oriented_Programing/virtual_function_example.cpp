#include<iostream>
#include<cstring>
using namespace std;

class HNH{
    protected:
            string tital;
            float reting;
    public:
        HNH(string s, float r){
            tital = s;
            reting = r;
        }
        virtual void display(){
            cout<<"The tital is "<<tital<<endl;
            cout<<"The reting is "<<reting<<endl;
        }
};

class HNHvideo : public HNH{
    float video_length;
    public:
        HNHvideo(string s, float r, float vl) : HNH(s, r){
            video_length = vl;
        }
        void display(){
            cout<<"The tital of the video is "<<tital<<endl;
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
            cout<<"The tital of the text is "<<tital<<endl;
            cout<<"The reting of the text is "<<reting<<endl;
            cout<<"The number of words in the text is "<<words<<" words"<<endl;
        }
};
int main(){
    string tital;
    float reting;
    float vlen;
    int words;

    //for video
    tital= "Data Structure";
    reting= 4.5;
    vlen= 33.33; 
    HNHvideo hnhvideo(tital, reting, vlen);
    //hnhvideo.display();

    //for text
    tital= "Data Structure textual";
    words= 1111;
    reting= 4.9;
    HNHtext hnhtext(tital, reting, words);
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