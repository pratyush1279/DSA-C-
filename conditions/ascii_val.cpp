#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter character : ";
    cin >> ch;
    if (ch >= 65 && ch <= 90){
        cout << "Uppercase";
    } else {
        cout << "Lowercase";
    }
    return 0;
}

//Boilerplate