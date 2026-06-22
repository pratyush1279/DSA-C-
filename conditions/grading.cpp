#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter marks : ";
    cin >> marks;
    if (marks >= 90){
        cout << "A grade";
    } else if (marks < 90 && marks>=75){
        cout << "B grade";
    } else {
        cout << "C grade";
    }
    return 0;
}

//Boilerplate