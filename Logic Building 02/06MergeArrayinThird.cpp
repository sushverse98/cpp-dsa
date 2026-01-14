#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[6] = {121,212,224,412,423,655};
    int arr2[3] = {220,415,670};

    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    //code here
    int arr3[m+n];

    int i=0, j=0, k=0;
    
    while(i < m && j <n){
        if(arr[i] < arr2[j]){
            arr3[k++] = arr[i++];
        }else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i < m){
        arr3[k++] = arr[i++];
    }

    while(j < n){
        arr3[k++] = arr2[j++];
    }

    for(int a:arr3){
        cout<<a<<" ";
    }
}