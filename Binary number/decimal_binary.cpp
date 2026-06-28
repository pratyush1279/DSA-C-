#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0;
    int pow = 1;

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum = decNum / 2;   // Remove 'int'

        ans += rem * pow;
        pow *= 10;
    }

    return ans;
}

int BinToDecimal(int binNum){
    int ans = 0;
    int pow = 1;
    
    while (binNum > 0){
        int rem = binNum % 10;
        ans += (rem * pow);
        binNum /= 10;
        pow = pow * 2;
    }
    return ans;
}

int main() {
    int decNum = 5;

    cout << decToBinary(decNum) << endl;
    cout << BinToDecimal(1100101) << endl;

    return 0;
}