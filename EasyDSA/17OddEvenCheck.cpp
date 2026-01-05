/*
Take two numbers and determine whether both are even, both are odd, or one is 
even and one is odd. 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    cout<<"enter two numbers:";
    cin>>num1>>num2;
    if(num1%2==0 && num2%2==0){
        cout<<"both num1 and num2 is even.";
    }else if(num1%2==0 && num2%2==1){
        cout<<"only num1 is even.";
    }else if(num1%2==1 && num2%2==0){
        cout<<"only num2 is even.";
    }else{
        cout<<"both the number is odd";
    }
    return 0;
}