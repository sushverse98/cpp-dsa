#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;

    if(num == 0 || num == 1){
        cout<<1;
        return 0;
    }

    int fact= 1;

    for(int i=2; i<=num; i++){
        fact *=i;
    }

    cout<<fact;
}