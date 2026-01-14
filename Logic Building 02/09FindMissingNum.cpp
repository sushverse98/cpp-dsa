#include<iostream>
using namespace std;

int main(){
    int arr[6] = {1,2,3,4,5,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int natural = ((n+1)*(n+2))/2;

    //code here
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i];
    }

    cout<<natural-sum;
}