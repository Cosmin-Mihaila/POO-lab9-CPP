template <class X>
Vector<X>::Vector(int d, X arr[])
{
    buf = new X[d];
    dim = d;
    for (int i = 0; i < d; i++)
    {
        buf[i] = arr[i];
    }
}

template <class X>
void Vector<X>::afisare()
{
    for (int i = 0; i < dim; i++)
    {
        cout << buf[i] << " ";
    }
}

// Merge tot fara sortare
template <class X>
void Vector<X>::sortare(){
    int i;
    int j;
    for(i = 0; i < dim - 1; i ++){
        for(j = i + 1; j < dim; j ++){
            if(buf[i] > buf[j]){
                X aux = buf[i];
                buf[i] = buf[j];
                buf[j] = aux;
            }
        }
    }
}