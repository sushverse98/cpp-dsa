#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a,b;
    cin>>a>>b;
    int result = sum(a,b);
    cout<<result;
}