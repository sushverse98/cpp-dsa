#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,7,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    //code here
    int isSorted = true;
    for(int i=1;i<n;i++){
        if(arr[i-1] >= arr[i]){
            isSorted = false;
            break;
        }
    }
    if(!isSorted){
        cout<<"Not Sorted";
    }else{
        cout<<"Sorted";
    }
}