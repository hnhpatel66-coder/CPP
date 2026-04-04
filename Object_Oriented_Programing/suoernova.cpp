#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] + 32;
        }
        else
        {
            s[i] = s[i] - 32;
        }
    }
    s[i] = '\0';
     cout << s;
    return 0;
}
