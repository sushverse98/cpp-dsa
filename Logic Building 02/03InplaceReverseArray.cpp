#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    //code here
    int left = 0;
    int right = n-1;

    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n\n";

    for(int x:arr){
        cout<<x<<" ";
    }
}