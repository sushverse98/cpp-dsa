#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter a string: ";
    cin>>s;

    int count = 0;

    for(char c : s){
        if(c == 'a' || c =='e' || c == 'i' || c == 'o' || c == 'u'){
            count++;
        }
    }

    cout<<"Total Vowel in this string is : "<<count;
}