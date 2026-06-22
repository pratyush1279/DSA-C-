#include<iostream>
using namespace std;

int main(){
    int a= 10;
    int c = 20;
    int d = ++c;
    int b = a++;
    cout << b << endl;
    cout << a << endl;
    cout << d << endl;
    cout << c << endl;
    int e= 10;
    int f = 20;
    int g = --e;
    int h = f--;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    return 0;
}

//Boilerplate