template <class X>
Nr_complex<X>::Nr_complex(){
}

template <class X>
Nr_complex<X>::Nr_complex(X real, X imaginar) {
    this->real = real;
    this->imaginar = imaginar;
}

template <class X>
bool Nr_complex<X>::operator >(const Nr_complex<X> & a){
    int s1 = a.real*a.real + a.imaginar*a.imaginar;
    int s2 = this->real*this->real + this->imaginar*this->imaginar;
    return (s2 > s1);
}