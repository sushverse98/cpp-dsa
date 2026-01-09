#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[6] = {1,1,1,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    int j = 1;

    while(j < n){
        if(arr[i] != arr[j]){
            arr[++i] = arr[j];
        }
        j++;
    }

    for(int k = i+1;k<n;k++){
        arr[k] = 0;
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

    return 0;
}