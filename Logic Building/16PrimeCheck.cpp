#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;

    bool isPrime = true;

    if(n== 1){
        cout<<"neither prime nor composite";
        return 0;
    }

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    
    if(isPrime){
        cout<<"Prime Number";
    }else{
        cout<<"Not a Prime Number";
    }

    return 0;
}