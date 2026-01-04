#include<bits/stdc++.h>
using namespace std;

void isPositive(int n){
    if(n>0){
        cout<<"Positive"<<endl;
    }else if(n==0){
        cout<<"Zero"<<endl;
    }else{
        cout<<"Negative"<<endl;
        }
    }

int main(){
    cout<<"Enter an integer: ";
    int n;
    cin>>n;
    
    isPositive(n);

    return 0;
}