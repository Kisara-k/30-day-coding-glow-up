#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    /*
    int n = 10;
    void *ptr = &n;
    //int *ptr = &n;
    
    cout << ptr << endl;
    //cout << *ptr << endl;
    */

    int* ptr = NULL;

    cout << "Pointer: " << ptr << endl;
    //cout << "Value: " << *ptr << endl; Undefined behavior
    cout << "Size: " << sizeof(ptr) << endl;
    //cout << "Value: " << *(int*)ptr << endl;
    //cout << "Value: " << *(string*)ptr << endl;
}