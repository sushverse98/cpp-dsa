//Take a day number (1–7) and print the corresponding day name. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"enter number of days(1->Sunday): ";
    cin>>num;
    switch(num){
        case 1: 
        cout<<"Sunday";
        break;

        case 2: 
        cout<<"Monday";
        break;

        case 3: 
        cout<<"Tuesday";
        break;

        case 4: 
        cout<<"Wednesday";
        break;

        case 5: 
        cout<<"Thursday";
        break;

        case 6: 
        cout<<"Friday";
        break;

        case 7: 
        cout<<"Saturday";
        break;

        default:
        cout<<"enter a valid input";

    }
    return 0;
}
