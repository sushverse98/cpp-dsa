#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    cout << "enter a number: ";
    cin >> num;

    if (num == 0){
        cout << "Armstrong Number";
        return 0;
    }

    int originalNumber = num;

    int count = 0;

    while (num > 0){
        count++;
        num /= 10;
    }

    int sum = 0;
    int number = originalNumber;
    while(number > 0){
        int power = 1;
        int digit = number%10;
        for(int i=1;i<=count;i++){
            power *= digit;
    }
    sum += power;
    number /= 10;
    }
    
    if (originalNumber == sum){
        cout << "Armstrong Number";
    }else{
        cout << "Not an Armstrong Number";
    }
}