#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter temperature: ";
    cin>>num;

    if(num < 10){
        cout<<"its cold here";
    }else if(num >= 10 && num <=35){
        cout<<"its warm here";
    }else{
        cout<<"its hot here";
    }
}