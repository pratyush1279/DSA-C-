#include <iostream>
using namespace std;

void intersection(int arr1[], int n, int arr2[], int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break; // Avoid printing duplicates from arr2
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);

    intersection(arr1, n, arr2, m);

    return 0;
}