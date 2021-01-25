#ifndef _FRACTIE_
#define _FRACTIE_

#include "vector.hpp"

template <class X = int>
class Fractie {
public:
    X numarator;
    X numitor;

    Fractie();
    Fractie(X, X);
    bool operator >(const Fractie<X> & a);
    friend ostream& operator<<(ostream& out, const Fractie<X>& obj)
    {
        out<<"Nr: " << obj.numarator << " ";
        out<<"Ni: " << obj.numitor << " ";

        return out;
    }
    Fractie<X>& operator=(const Fractie<X>& obj)
    {
        this->numarator = obj.numarator;
        this->numitor = obj.numitor;

        return *this;
    }
};



#include "fractie.cpp"
#endif
