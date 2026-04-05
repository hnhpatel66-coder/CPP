#include<iostream>
using namespace std;

class far;

class cel{
    private:
        float celcius;
        
    public:
        cel():celcius(0){}
        cel(float c):celcius(c){}

        // void fahrenhit(){
        //     float f=((celcius*9/5)+32);
        //     cout << "Temperature in Fahrenheit: " << f << endl;
        // }

        bool operator ==(cel temp) {
        return (celcius == temp.celcius);
        }

        operator far();
};

class far{
    private:
        float fahrenheit;
    public:
        far():fahrenheit(0){}
        far(float f):fahrenheit(f){}

        // void celcius(){
        //     float c=((fahrenheit-32)*5/9);
        //     cout << "Temperature in Celcius: " << c << endl;
        // }

        operator cel(){
            float c = (fahrenheit - 32) * 5/9;
            return cel(c);
        }
};

cel::operator far() {
    float f = (celcius * 9/5) + 32;
    return far(f);
}

int main() {
    float n1, n2;
    cout << "Enter temperature in Celcius: ";
    cin >> n1;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> n2;

    cel c(n1);
    far f(n2);

    far f1= c;
    cel c1= f;

    // c.fahrenhit();
    // f.celcius();

    if(c == f){
        cout << "Temperatures are equal." << endl;
    } else {
        cout << "Temperatures are not equal." << endl;
    }

    return 0;
}