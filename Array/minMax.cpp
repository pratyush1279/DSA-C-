#include<iostream>
#include<climits>
using namespace std;

    int smallest = INT_MAX;
    int largest = INT_MIN;

int minMax(int arr[], int size){

    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 0; i < size; i++){
        if (arr[i] < smallest){
            smallest = arr[i];
            minIndex = i;
        }
        if (arr[i] > largest){
            largest = arr[i];
            maxIndex = i;
        }
    }
    swap(arr[minIndex], arr[maxIndex]);
    
}

int main(){
    int arr[] = {1, 3, 8, 4};
    int size = 4;

    cout << minMax(arr, size) << "New Array" << endl;

    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}