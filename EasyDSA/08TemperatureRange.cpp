#include<bits/stdc++.h>
using namespace std;

int main(){
    int temp;
    cout<<"enter temperature: ";
    cin>>temp;

    if(temp<15){
        cout<<"Cold";
    }else if(temp >= 15 && temp<35){
        cout<<"Warm";
    }else{
        cout<<"Hot";
    }

    return 0;
}