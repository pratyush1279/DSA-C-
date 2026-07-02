#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};
    cout << vec.size() << endl;  // size function
    vec.push_back(4);  // push_back function
    vec.push_back(8);  // push_back function
    vec.pop_back();  // pop_back function
    cout << "After push back size = " << vec.size() << endl;
    cout << vec.front() << " "; // prints the front value
    cout << vec.back() << " "; // prints the back value
    cout << vec.at(2) << " "; // prints the value at given index
    cout << vec.capacity() << " "; // prints the capacity
    for( int val : vec){
        cout << val << " ";
    }
}