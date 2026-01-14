#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {1,2,1,1,2,4,4,4,4,5,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    //code here
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(auto x:freq){
        cout<<x.first<<"->"<<x.second<<"\n";
    }

}
