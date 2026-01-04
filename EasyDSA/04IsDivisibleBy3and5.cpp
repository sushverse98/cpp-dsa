#include<bits/stdc++.h>
using namespace std;

string isDivisibleBy3and5(int num){
    if(num%3 == 0 && num%5 == 0){
        cout<<"Divisible by both 3 and 5";
    }else{
        cout<<"Not Divisible by both 3 and 5";
    }
}

int main(){
    int num;
    cout<<"enter a num: ";
    cin>>num;

    isDivisibleBy3and5(num);
    
    return 0;
}