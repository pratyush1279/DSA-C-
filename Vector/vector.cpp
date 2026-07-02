#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <string> cars = {"BMW", "Mercedes","Mc Leren" };
    vector <int> vec (5,1);
    vector <char> letter = {'a','b','c','d','e'};

    for(char val : letter){
        cout << val << endl;
    }
    cout << cars[0] << endl;
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    return 0;
}