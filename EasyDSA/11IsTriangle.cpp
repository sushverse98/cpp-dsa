//Take three sides and check if they form a valid triangle. 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3;
    cout<<"enter three sides of triangle: ";
    cin>>s1>>s2>>s3;
    if(s1+s2 > s3 && s1+s3 > s2 && s2+s3 > s1){
        cout<<"Valid Triangle";
    }else{
        cout<<"not a valid triangle";
    }
    return 0;
}