//Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’. 

#include<bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cout<<"enter a char: (a-z)"<<endl;
    cin>>c;
    if(c >= 97 && c <= 109){
        cout<<"it lies between a-m";
    }else if(c >= 110 && c <= 122){
        cout<<"it lies between n-z";
    }else{
        cout<<"enter a valid alphabet";
    }
    return 0;
}