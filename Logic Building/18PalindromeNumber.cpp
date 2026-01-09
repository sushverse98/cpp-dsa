#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int originalNumber = num;
    int reversedNumber = 0;

    while(num > 0){
        reversedNumber = reversedNumber*10 + num%10;
        num /= 10;
    }
    if(originalNumber == reversedNumber){
        cout<<"is Pallindrome";
    }else{
        cout<<"not a Pallindrome";
    }
}