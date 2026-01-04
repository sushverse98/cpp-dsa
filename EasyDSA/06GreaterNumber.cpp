#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter First Number: ";
    cin>>num1;
    cout<<"Enter Second Number: ";
    cin>>num2;
    cout<<endl;
    
    int result = (num1>num2)?num1:num2;
    cout<<"Greater Number is "<<result;

    return 0;
}