#include <iostream>
#include <string>
using namespace std;

int main(){
    int year;
    cout<<"Enter YYYY: ";
    cin>>year;

    string answer = (year%400 == 0 && year%4 == 0) ||(year%100 != 0)?"Leap Year":"Non-Leap Year";
    cout<<answer;
}