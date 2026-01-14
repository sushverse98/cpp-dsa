#include<iostream>
using namespace std;

int main(){
    int arr[6] = {12,123,15,1,7,26};
    int n = sizeof(arr)/sizeof(arr[0]);

    //code here
    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 0; i < n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }else if(arr[i] < smallest){
            smallest = arr[i];
        }     
    }
    cout<<"\nSmallest: "<<smallest<<"\nLargest: "<<largest;
}