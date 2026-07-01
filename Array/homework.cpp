#include<iostream>
#include<utility>
using namespace std;

int sumProduct(int arr[], int size){
    int sum = 0;
    int product = 1;

    for (int i = 0; i < size; i++){
        product *= arr[i];
        sum += arr[i];
    }
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
    return 0;
}

int main(){
    int arr[] = {1, 5, 3, 7, 4};
    int size = 5;

    cout << sumProduct(arr, size) << endl;
return 0;
    
}