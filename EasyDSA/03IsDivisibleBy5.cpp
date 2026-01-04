#include<bits/stdc++.h>
using namespace std;

string isDivisibleBy5(int num){
    if(num%5 == 0){
        cout<<"Divisible by 5";
    }else{
        cout<<"Not Divisible by 5";
    }
}

int main(){
    int num;
    cout<<"enter a num: ";
    cin>>num;

    isDivisibleBy5(num);
    
    return 0;
}