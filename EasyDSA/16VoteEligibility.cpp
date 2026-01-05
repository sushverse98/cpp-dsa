//Check voting eligibility for a given age (18+).

#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age >= 18){
        cout<<"Eligible to vote";
    }else{
        cout<<"Not Eligible to vote";
    }
    return 0;
}