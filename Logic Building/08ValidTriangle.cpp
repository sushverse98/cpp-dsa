#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"enter three sides of triangle: ";
    cin>>num1>>num2>>num3;

    bool isValid = (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1);

    if(isValid){
        cout<<"Valid";
    }else{
        cout<<"Not Valid";
    }

    return 0;
}