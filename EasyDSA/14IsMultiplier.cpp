//Check if one of two given numbers is a multiple of the other. 
#include<bits/stdc++.h>
using namespace std;

bool isMultiple(int a, int b){
    if(a%b==0 || b%a==0){
        return true;
    }
    return false;
}

int main(){
    int num1,num2;
    cout<<"enter first number: ";
    cin>>num1;
    cout<<"enter second number: ";
    cin>>num2;

    bool result = isMultiple(num1,num2);

    if(!result){
        cout<<"not a multiple";
    }else{
        cout<<"multiple";
    }
}