#include<iostream>
using namespace std;

class cel{
    private:
        float celcius;
    public:
        cel(float c):celcius(c){}

        void fahrenhit(){
            float f=((celcius*9/5)+32);
            cout << "Temperature in Fahrenheit: " << f << endl;
        }

        bool operator ==(cel temp) {
        return (celcius == temp.celcius);
    }
};

class far{
    private:
        float fahrenheit;
    public:
        far(float f):fahrenheit(f){}

        void celcius(){
            float c=((fahrenheit-32)*5/9);
            cout << "Temperature in Celcius: " << c << endl;
        }

        operator cel(){
            float c = (fahrenheit - 32) * 5/9;
            return cel(c);
        }
};

int main() {
    float n1, n2;
    cout << "Enter temperature in Celcius: ";
    cin >> n1;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> n2;

    cel c(n1);
    far f(n2);

    c.fahrenhit();
    f.celcius();

    if(c == f){
        cout << "Temperatures are equal." << endl;
    } else {
        cout << "Temperatures are not equal." << endl;
    }

    return 0;
}