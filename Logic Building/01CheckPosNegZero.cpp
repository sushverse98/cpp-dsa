#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;

    string result = (num == 0)?"Zero":(num > 0)?"Positive":"Negative";
    cout<<result;
}