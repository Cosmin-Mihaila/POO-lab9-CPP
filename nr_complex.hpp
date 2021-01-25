#ifndef _COMPLEX_
#define _COMPLEX_

#include "vector.hpp"
template <class X>
class Nr_complex {
    X real;
    X imaginar;
public:
    Nr_complex();
    Nr_complex(X, X);
    bool operator >(const Nr_complex<X> & a);
    friend ostream& operator<<(ostream& out, const Nr_complex<X>& obj)
    {
        out<<"Real: " << obj.real << " ";
        out<<"Imaginar: " << obj.imaginar<< " ";

        return out;
    }
    Nr_complex<X>& operator=(const Nr_complex<X>& obj)
    {
        this->real = obj.real;
        this->imaginar = obj.imaginar;

        return *this;
    }
};

#include "nr_complex.cpp"

#endif