#include<bits/stdc++.h>
using namespace std;

bool isOdd(int num){
    if(num% 2== 1){
        return true;
    }
    return false;
}
int main(){
    cout<<"enter a number: ";
    int num;
    cin>>num;

    bool result = isOdd(num);
    if(result) cout<<"odd";
    else cout<<"even";
    
    return 0;
}