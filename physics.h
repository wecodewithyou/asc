#ifndef __PHYSICS_H_INCLUDED__
#define __PHYSICS_H_INCLUDED__

#include<iostream>
#include <math.h>
using namespace std;

void q()  //Quantization 	
{
	double e = 1.6*e-19,q,n;  	// e is the charge of Proton or electrons
	
	cout << " Enter no.of particles : ";
	cin >> n;		//No.of Protons or Electrons
	
	q = n*e;	//Quantization Of Charge (Eqn)
	cout <<" Charge : "<< q << endl; 	//charge on a body
	
}


void f() 	// Coulomb's Law
{
	double k = 9e9;	 // coulomb's law constant [ k = 1/4*3.14*e0 ]
	double q1,q2,r,force; 	//q1,q2 : charges , r : distance b/w charges
	
	cout << " Enter charges : ";
	cin >> q1 >> q2;
	cout <<" Enter the distance : ";
	cin >> r;
	
	force = k*q1*q2/(pow(r, 2));  	// Force b/w charges
	cout<<" Force = " << force << endl;
	
}

#endif