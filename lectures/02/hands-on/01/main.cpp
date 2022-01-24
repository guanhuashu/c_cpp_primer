// File       : main.cpp
// Description: Lecture 2: Hands-On 01
#include <iostream>
using namespace std;
// you can write to stdout with: std::cout << "Hello\n"; // (example)

/**
* Generate an integer array `v1` of size `N=100`
* Write and call a function `init(...)` that initializes an input array `v` to
  values `v[i] = i` for `i = 0, ..., N-1`
* Create another array `v2` of size `N`
* Write and call a function `cp(...)` that takes two input arrays and copies the
  contents of the first array into the second array
* Output the _difference_ `v1[i] - v2[i]` for `i = 0, ..., N-1` to the console
  to test your implementation
  **/

void init(int v[], int N)
{
    for (int i=0; i<N; ++i) {
        v[i] = i;
    }
}

void cp(const int src[], int dst[], int N) 
{
    for (int i=0; i<N; ++i) {
        dst[i] = src[i];
    }
}


#define N 100
int main(void)
{
    int v1[N];
    int v2[N];

    init(v1, N);
    cp(v1, v2, N);
   
    for (int i=0; i<N; ++i) {
        cout << v1[i] - v2[i] << "\n";
    }
    return 0;
}
