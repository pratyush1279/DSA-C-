#include<iostream>
using namespace std;

int primeNo(){

    int n = 6;
    
    bool isPrime = true;

    if (n <= 1) {
            isPrime = false;
    }
    for (int i = 2; i < n; i++){
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
        if (isPrime) {
            cout << "prime No";
        } else {
            cout << "non prime";
        }
        cout << endl;
    

    return 0;
}

int primeNumber(int n){
    
    for (int i = 2; i <= n; i++){

        bool isPrime = true;

        for (int j = 2; j < i; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if (isPrime){
            cout << i << " ";
        }
    }
    return 0;
}

int main(){
    primeNo();
    primeNumber(20);
    return 0;
}