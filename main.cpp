#include "fractie.hpp"
#include "nr_complex.hpp"
int main()
{
    int arr[5] = {1, 5, 4, 3, 2}; 
    Vector<int> iv(5, arr);
    double arrD[5] = {5.0, 8.1, 7.5, 8.9, 1.2};
    Vector<double> id(5, arrD);

    Fractie<int> frV[3] ;

    frV[0] = *(new Fractie<int>(1,2));
    frV[1] = *(new Fractie<int>(4,5));
    frV[2] = *(new Fractie<int>(2,3));

    Vector<Fractie<int> > iFr(3, frV);

    Nr_complex<int> ncV[3];

    ncV[0] = *(new Nr_complex<int>(9,10));
    ncV[1] = *(new Nr_complex<int>(18,11));
    ncV[2] = *(new Nr_complex<int>(7,6));

    Vector<Nr_complex<int> > iNc(3, ncV);
    iv.afisare();
    cout<<endl;
    id.afisare();
    cout<<endl;
    iFr.afisare();
    cout<<endl;
    iNc.afisare();
    cout<<endl;

    iFr.sortare();
    iv.sortare();
    id.sortare();
    iNc.sortare();
    cout<<endl;

    iv.afisare();
    cout<<endl;
    id.afisare();
    cout<<endl;
    iFr.afisare();
    cout<<endl;
    iNc.afisare();
    cout<<endl;
    return 0;
}
