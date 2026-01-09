#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;

    int i=0,j=1;
    cout<<"\nwhile-loop\n";
    while(i<n){
        cout<<++i<<" ";
    }
    
    cout<<"\ndo-while\n";
    do{
        cout<<j<<" ";
        j++;
    }while(j<=n);

    cout<<"\n\nfor-loop\n";
    for(int k=1;k <= n;k++){
        cout<<k<<" ";
    }

    return 0;
}