#include<iostream>
using namespace std;

float sum (float a,float b){
    float c = a+b;
    cout << "sum is: " << c << endl;
    return 0;
}

int min (int a, int b){
    if(a<b){
        cout << "a is smaller";
    } else{
        cout << "b is smaller";
    }
}

int naturalNoSum(int n){
    
    int sum = 0;
    for(int i = 0; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}

int main (){
    sum (2.33,6.458);
    min(2,6);
    cout << endl;
    naturalNoSum(3);
}