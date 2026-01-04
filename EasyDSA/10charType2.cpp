#include <cctype>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cout<<"enter a char: ";
    cin>>c;
    
    if (isupper(c))
        cout << "Uppercase";
    else if (islower(c))
        cout << "Lowercase";
    else if (isdigit(c))
        cout << "Digit";
    else
        cout << "Special character";
    return 0;
}
