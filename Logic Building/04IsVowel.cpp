#include<iostream>
#include<string>
using namespace std;

int main(){
    char c,ch;
    cout<<"enter a char: ";
    cin>>c;
    ch = tolower(c);

    if(!isalpha(ch)){
        cout<<"entered char is not an alphabet";
    }else if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout<<"entered char is vowel";
    }else{
        cout<<"entered char is consonant";
    }
    return 0;
}