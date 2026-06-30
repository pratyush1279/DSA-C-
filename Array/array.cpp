#include<iostream>
#include<climits>
using namespace std;

int smallest(){
    int arr[] = {2, 5, -52, 63, 8, -12};
    int size = 6;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++){
        // largest = max(arr[i],largest);
        if (arr[i] > largest){
            largest = arr[i];
        } 
        if (arr[i] < smallest){
            // smallest = arr[i];
            smallest = min(arr[i], smallest);
        }
    }
    cout << endl;
    cout << smallest << endl;
    cout << largest << endl;
}

int index(){
    int arr[] = {2, 5, 8, 9, 10};
    int size = 5;
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int index = -1;
    int indexS;
    int indexL;

    for(int i = 0; i < size; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            indexS = i;
        }
        if(arr[i] > largest){
            largest = arr[i];
            indexL = i;
        }
    }
    cout << "Smallest Element: " << smallest << endl;
    cout << "Smallest Element Index: " << indexS << endl;
    cout << "largest Element: " << largest << endl;
    cout << "largest Element Index: " << indexL << endl;
}

void arr(){
    
    int marks[5];

    cout << "Enter 5 marks: ";

    for (int i = 0; i < 5; i++){
        cin >> marks[i];
    }
    cout << "Marks are: " << endl;

    for (int i = 0; i < 5; i++){
        cout << marks[i] << endl;
    }
}

int main(){
    int marks[5] = {99, 100, 54, 36, 88};
    double price[] = {99.3, 100.3, 54.9};

    cout << price[2] << endl;
    // arr();
    smallest();
    index();
    return 0;
}