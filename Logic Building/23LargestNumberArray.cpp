#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int* arr = new int[n];

    cout<<"enter "<<n<< " numbers\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nelements in the array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //check maximum
    int maximum = arr[0];
    for(int i=1;i<n;i++){
        maximum = max(maximum,arr[i]);
    }

    cout<<"\n\nMaximum : "<<maximum;
}