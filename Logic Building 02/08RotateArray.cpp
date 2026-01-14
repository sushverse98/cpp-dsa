#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    k = k % n;


    //code here
    int arr2[n];
    int i=k,j=0;
    for(;i<n;){
        arr2[j++] = arr[i++];
    }
    for(int a=0;a<k;a++){
        arr2[j++] = arr[a];
    }

    for(int x:arr2){
        cout<<x<<" ";
    }

    cout<<"\n";

    //optimized code
    int arr3[6] = {1,2,3,4,5,6};
    reverse(arr3,arr3+k);
    reverse(arr3+k,arr3+n);
    reverse(arr3,arr3+n);

    for(int z:arr3){
        cout<<z<<" ";
    }

}