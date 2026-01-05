#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;

    do{
        cout << "\n\nenter a month number: ";
        cin >> num;

        switch (num){
        case 0:
            cout << "Exiting...";
            exit(0);
            break;

        case 1:
            cout << "January";
            break;

        case 2:
            cout << "February";
            break;

        case 3:
            cout << "March";
            break;

        case 4:
            cout << "April";
            break;

        case 5:
            cout << "May";
            break;

        case 6:
            cout << "June";
            break;

        case 7:
            cout << "July";
            break;

        case 8:
            cout << "August";
            break;

        case 9:
            cout << "September";
            break;

        case 10:
            cout << "October";
            break;

        case 11:
            cout << "November";
            break;

        case 12:
            cout << "December";
            break;

        default:
            cout << "not a valid input";
        }
    } while (num >= 0);

    return 0;
}
