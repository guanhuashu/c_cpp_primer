// File       : main.cpp
// Description: Lecture 2: Hands-On 02, pointers
#include <iostream>

using namespace std;

int main(void)
{
    int a[100]; // array with 100 elements

    // TODO: create a pointer that points to the first element in the array `a`
    int *p0 = &a[0];

    // TODO: print the address of the pointer to stdout. (You can use std::cout
    // to print to stdout.)
    cout << "Address of the pointer: " << &p0 << endl;


    // TODO: print the address the pointer is pointing to, to stdout.
    cout << "Address the pointer points to: " << p0 << endl;

    // TODO: create another pointer that points to the last element in the array
    // `a`
    int *p1 = &a[99];

    // TODO: print the difference between the address the pointer you just
    // created points to and the address the first pointer points to.  What do
    // you observe?
    cout << "Difference p1 - p0: " << p1 - p0 << endl;

    return 0;
}
