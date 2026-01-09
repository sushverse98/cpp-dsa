#include <iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"enter three sides of triangle: ";
    cin>>num1>>num2>>num3;

    bool isValid = (num1 + num2 > num3 && num1 + num3 > num2 && num2 + num3 > num1);

    if(isValid){
        if(num1 == num2 && num1 == num3){
            cout<<"Equilateral Triangle";
        }else if(num1 == num2 || num1 == num3 || num2 == num3){
            cout<<"Isosceles Triangle";
        }else{
            cout<<"Scalene Triangle";
        }
    }else{
        cout<<"not a valid triangle";
    }

    return 0;
}