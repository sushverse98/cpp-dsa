#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"enter x and y axis: ";
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"Origin";
    }else if(x==0){
        cout<<"Y-axis";
    }else if(y==0){
        cout<<"X-axis";
    }else if(x>0 && y>0){
        cout<<"Quad-I";
    }else if(x<0 && y>0){
        cout<<"Quad-II";
    }else if(x<0 && y<0){
        cout<<"Quad-III";
    }else if(x>0 && y<0){
        cout<<"Quad-IV";
    }else{
        cout<<"Not a valid Input";
    }

    return 0;
}