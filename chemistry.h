#ifndef __CHEMISTRY_H_INCLUDED__
#define __CHEMISTRY_H_INCLUDED__

#include <iostream>
#include <cmath>

using namespace std;

const double NA = 6.022e23;
const double RG = 8.314; // Gas Constant

// CHAPTER 1

double density()
{
    const int scc = 1;
    const int bcc = 2;
    const int fcc = 4;
    double M,z,d,a;
    string type;
    cout << "\n Unit Cell Density:- " << endl;
    cout << " Enter the edge Length (a) : ";
    cin >> a;
    cout << " Enter the atomic mass of the element (M) : ";
    cin >> M;
    cin.ignore();
    cout << " Enter the type of cubic cell (scc/bcc/fcc) : ";
    getline(cin, type);
    if(type == "scc")
      z = scc;
    else if(type == "bcc")
      z = bcc;
    else if(type == "fcc")
      z = fcc;
    else
      cout << "\n Invalid cubic cell type , please enter the correct one " << endl;
    d = (z*M)/(NA*pow(a, 3));
    cout << " Density of the unit cell (d) = " << d << endl;;
    return d;
}

double atomic_mass()
{
  double d,m = 0,z,a;
  cout << " Enter the density of unit cell (d) : ";
  cin >> d;
  cout << " Enter the no of atoms in unit cell (z) : ";
  cin >> z;
  cout << " Enter the edge length (a) : ";
  cin >> a;
  m = (d*pow(a,3)*NA)/z;
  cout << " The atomic mass of the element = " << m << endl;
  return m;
}

void no_of_atoms()
{
  int scc = 1, bcc = 2, fcc = 4;
  double a,z,d,tot_v,v_at_mass,mass,no_in_mass,tot_no;
  string type;
  cout << "\n Total Number Of Atoms :- " << endl;
  cout << " Enter density : ";
  cin >> d;
  cout << " Enter edge length : ";
  cin >> tot_v;
  cout << " Enter unit cell type (scc/bcc/fcc): ";
  cin >> type;
  if(type == "scc")
    z = scc;
  else if(type == "bcc")
    z = bcc;
  else if(type == "fcc")
    z = fcc;
  else
    cout << " Invalid type " << type << endl;
  cout << " Enter the mass of the element : ";
  cin >> mass;
  tot_v = pow(tot_v,3);
  v_at_mass = mass/d;
  tot_no = v_at_mass/tot_v;
  no_in_mass = z * tot_no;
  cout << " Total number of atoms in " << mass << "g = " << no_in_mass << endl;
  cout << " Total number of atoms = " << tot_no << endl;
}


// CHAPTER 4

void order_of_reaction()
{
    double p1,p2;
    cout << "\n Order Of Reaction:- " << endl;
    cout << " Enter the power of first reactant : ";
    cin >> p1;
    cout << " Enter the power of second reactand : ";
    cin >> p2;
    cout << " Order = " << p1+p2 << endl;
}

void life_of_first_order()
{
    double t,K;
    cout << "\n t1/n life of first order reaction:- " << endl;
    cout << " Enter the time life to find : ";
    cin >> t;
    cout << " Enter the value of reaction constant (K) : ";
    cin >> K;
    cout << " t period = " << (2.303/K) * log10(1/1-t) << endl;
}

void activation_energy()
{
    double Ea , T1, T2, K1, K2;
    cout << "\n Activation Energy :- " << endl;
    cout << " Enter T1 : ";
    cin >> T1;
    cout << " Enter T2 : ";
    cin >> T2;
    cout << " Enter K1 : ";
    cin >> K1;
    cout << " Enter K2 : ";
    cin >> K2;
    Ea = ((2.303*RG*T1*T2)/(T2-T1)) * log10(K2/K1);
    cout << " Activation Energy = " << round(Ea) << " J/mol" << endl;
}

#endif
