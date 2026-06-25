#include<iostream>
using namespace std;

int pyramidPattern(){
    int n = 4;
    
    for (int i=0; i < n; i++){
        
        for (int j=0; j < n-i-1; j++){
            cout << " ";
            
        }
        for (int j = 1; j <= i+1; j++){
            cout << j;
        }
        for (int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

int hollowPyramid() {
    int n = 5;

    // Upper Part
    for (int i = 0; i < n; i++) {

        // Leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Left star
        cout << "*";

        // Middle spaces
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << " ";
        }

        // Right star
        if (i != 0) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Part
    for (int i = 1; i < n; i++) {

        // Leading spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Left star
        cout << "*";

        // Middle spaces
        for (int j = 0; j < 2 * (n - i) - 3; j++) {
            cout << " ";
        }

        // Right star
        if (i != n - 1) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}

int main(){
    pyramidPattern();
    hollowPyramid();
    return 0;
}