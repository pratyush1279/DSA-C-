#include <iostream>
using namespace std;

int sum(int a, int b) {
    a = a + 10;   // 15
    b = b + 10;   // 14
    return a + b; // 29
}

int sumOfDigits(int num){

    int digSum = 0;

    while(num > 0){
        int lastDigit = num % 10;
        num /= 10;
        digSum += lastDigit;
    }
    return digSum;
}

int main() {
    int a = 5, b = 4;

    cout << sum(a, b) << endl;

    cout << a << endl;
    cout << b << endl;

    cout << sumOfDigits(1256);

    return 0;
}