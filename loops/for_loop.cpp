#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
        if (i == 3 ){
            break;
        }
    }

    cout << sum; // print sum after the loop to print the final output.

    return 0;
}