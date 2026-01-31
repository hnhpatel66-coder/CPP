#include<iostream>
using namespace std;

int main(){
int marks;
cout<<"Enter Marks: ";
cin>>marks;

if(marks>90 && marks<=100){
    cout<<"Your Gread is A++"<<endl;
}
else if(marks>80 && marks<=90){
    cout<<"Yore Gread is A";
}    
else if(marks>70 && marks<=80){
    cout<<"Yore Gread is B++";
}

else if(marks>60 && marks<=70){
    cout<<"Yore Gread is B";
}

else if(marks>50 && marks<=60){
    cout<<"Yore Gread is C++";
}

else if(marks>40 && marks<=50){
        cout<<"Yore Gread is C";
}

else if(marks>=33 && marks<=40){
    cout<<"Yore Gread is D++";
}

else if(marks>=0 && marks<33){
    cout<<"Yore Gread is D";
}
else{
    cout<<"Enter your Wrong Marks";
}

return 0;
}