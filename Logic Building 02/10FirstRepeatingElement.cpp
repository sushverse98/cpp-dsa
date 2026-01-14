#include<iostream>
#include<map>
using namespace std;

int main(){
    int arr[6] = {1,2,3,3,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    //code here
    /*
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j]){
                cout<<arr[i];
                return 0;
            }
        }
    }
    cout<<"No Duplicate";
    */

    //Optimized Solution
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    for(auto x:m){
        if(x.second > 1){
            cout<<x.first<<" ";
            return 0;
        }
    }
    cout<<"No Duplicate Found";
}