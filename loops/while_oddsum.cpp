#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int sum = 0;
    int i = 0;
    while (i <= n){
        if(i % 2 != 0){
        sum += i;
        }
        i++;
    }

    cout << sum;

    return 0;
}