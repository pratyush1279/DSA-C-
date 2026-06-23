#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int mul = 1;
    for (int i = 5; i >= 1; i--){
        mul *= i;
    }
    cout << mul;
    return 0;
}