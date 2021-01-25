#ifndef _HEADER_
#define _HEADER_
#include <iostream>
using namespace std;

template <class X = int>
class Vector
{
private:
    int dim;
    X *buf;

public:
    Vector(int d, X arr[]);
    void afisare();
    void sortare();
};

#include "vector.cpp"
#endif