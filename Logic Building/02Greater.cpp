#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter first number: ";
    cin>>num1;

    cout<<"enter second number: ";
    cin>>num2;

    if(num1 == num2){
        cout<<"both numbers are equal\n";
        return 0;
    }
    
    string result = (num1 > num2)?"first number is greater":"second number is greater";
    cout<<result;
}