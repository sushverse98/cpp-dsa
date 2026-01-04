#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    char c = tolower(ch);

    if(c == 'a'|| c == 'e'|| c =='i'|| c == 'o'|| c == 'u'){
        cout<<"vowel";
    }else{
        cout<<"consonant";
    }
    return 0;
}