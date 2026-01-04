//If the sides form a valid triangle, determine whether it is equilateral, isosceles, or 
//scalene.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3;
    cout<<"enter three sides of triangle: ";
    cin>>s1>>s2>>s3;
    if(s1+s2 > s3 && s1+s3 > s2 && s2+s3 > s1){
        if(s1 == s2 && s1 == s3 && s2 == s3){
            cout<<"Equilateral Triangle";
        }else if(s1 == s2 || s1 == s3 || s2 == s3){
            cout<<"Isosceles Triangle";
        }else{
            cout<<"Scalene Triangle";
        }
    }else{
        cout<<"not a triangle";
    }
    return 0;
}