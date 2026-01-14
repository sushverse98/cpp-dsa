#include<iostream>
#include<set>
using namespace std;

int main(){
    int arr[6] = {1,2,3,3,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    //code here
    set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    for(int x:s){
        cout<<x<<" ";
    }
}