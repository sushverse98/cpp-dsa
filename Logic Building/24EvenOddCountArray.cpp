#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int* arr = new int[n];

    cout<<"enter "<<n<< " numbers: ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"\nelements in the array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int oddCount = 0;
    int evenCount = 0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }else{
            oddCount++;
        }
    }

    cout<<"\n";

    cout<<"Even Count: "<<evenCount<<"\n";
    cout<<"Odd Count: "<<oddCount<<"\n";

}