#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter a string: ";
    cin>>s;

    int left = 0;
    int right = s.size()-1;

    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }

    cout<<s;

}