#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[6] = {5,12,10,15,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    //code here
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            secondLargest = largest;
            largest = arr[i];
        }else if(arr[i] > secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }

    cout<<"\nLargest: "<<largest;
    cout<<"\nSecond Largest: "<<secondLargest;

}