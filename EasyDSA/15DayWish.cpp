/*Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good 
Evening”, or “Good Night”. 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int time;
    cout<<"enter hour(24 hour format):";
    cin>>time;
    if(time >= 5 && time < 12){
        cout<<"Good Morning";
    }else if(time >= 12 && time < 18){
        cout<<"Good Afternoon";
    }else if(time >= 18 && time < 21){
        cout<<"Good Evening";
    }else if(time >= 21 && time <= 23 || time >= 0 && time < 5){
        cout<<"Good Night";
    }else{
        cout<<"time is not valid";
    }

    return 0;
}
