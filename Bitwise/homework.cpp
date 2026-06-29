#include <iostream>
using namespace std;

// Function to check if a number is a power of 2
bool isPowerOf2(int n) {
    if (n <= 0)
        return false;

    return (n & (n - 1)) == 0;
}

// Function to reverse an integer
int reverseNumber(int n) {
    int revNum = 0;

    while (n > 0) {
        int digit = n % 10;
        revNum = revNum * 10 + digit;
        n /= 10;
    }

    return revNum;
}

int main() {
    int num = 16;
    int n = 125;

    // Check Power of 2
    if (isPowerOf2(num))
        cout << num << " is a Power of 2" << endl;
    else
        cout << num << " is Not a Power of 2" << endl;

    // Reverse Number
    cout << "Reverse of " << n << " = " << reverseNumber(n) << endl;

    return 0;
}