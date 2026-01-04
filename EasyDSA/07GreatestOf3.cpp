#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<"Enter Third Number: ";
    cin>>num3;  

    int result = (num1>num2 && num1>num3)?num1:(num2>num3)?num2:num3;
    cout<<"Greatest Number is "<<result;

    return 0;
}