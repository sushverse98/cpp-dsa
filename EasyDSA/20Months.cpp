/*
Take a month number (1–12) and print the number of days in that month (ignore leap 
years). 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"enter a month number: ";
    cin>>num;

    switch(num){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
           cout<<"31 days";
           break;

        case 2:
            cout<<"28 days";

        case 4: case 6: case 9: case 11:
           cout<<"30 days";
           break;

        default:
            cout<<"not a valid input";
            cout<<"EXITING...";
        
    }
    return 0;
}
