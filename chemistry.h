#ifndef __CHEMISTRY_H_INCLUDED__
#define __CHEMISTRY_H_INCLUDED__

#include <iostream>
#include <cmath>

using namespace std;

const double NA = 6.022e23;

double density()
{
    double M,z,d,a;
    cout << " Enter the edge Length (a) : ";
    cin >> a;
    cout << " Enter the atomic mass of the element (M) : ";
    cin >> M;
    cout << " Enter the number of particles present per unit cell (z): ";
    cin >> z;
    d = (z*M)/(NA*pow(a, 3));
    cout << " Density of the unit cell (d) = ";
    return d;
}

#endif