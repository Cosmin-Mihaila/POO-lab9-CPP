template <class X>
Fractie<X>::Fractie(){}

template <class X>
Fractie<X>::Fractie(X numarator, X numitor){
    this->numarator = numarator;
    this->numitor = numitor;
}

template <class X>
bool Fractie<X>::operator >(const Fractie<X> & a){
    float s1 = float(a.numarator)/a.numitor;
    float s2 = float(this->numarator)/this->numitor;
    return (s2 > s1);
}

