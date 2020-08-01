#ifndef __PHYSICS_H_INCLUDED__ // header lock
#define __PHYSICS_H_INCLUDED__

#include<iostream>
#include<cmath>
using namespace std;

// Constants

const double e = 1.6e-19; 	// e is the charge of Proton or electrons
const double k = 9e9;  // coulomb's law constant [ k = 1/4*pi*e0 ]

void q()  	//Quantization 	
{
	double q,n;  
	cout << "\t\t\t Quantization \t\t\t\n";
	cout << " Enter no.of particles : ";
	cin >> n;		//No.of Protons or Electrons
	
	q = n*e;	//Quantization Of Charge (Eqn)
	cout <<" Charge = "<< q << endl; 	//charge on a body
	
}


int f() 	// Coulomb's Law
{
	double q1,q2,r,force; 	//q1,q2 : charges , r : distance b/w charges
	
	cout << "\t\t\t Force \t\t\t\n";
	cout << " Enter first charge : ";
	cin >> q1;
	cout << " Enter second charge : ";
	cin >> q2;
	cout <<" Enter the distance : ";
	cin >> r;
	
	force = k*q1*q2/(pow(r, 2));  	// Force b/w charges
	cout << " Force = ";

	return force ;
	
}
	

int E()  	//Electric Field
{
	double electric_field,force,q;  	// choice is to determine Unknown force
	char choice;
	
	cout << "\t\t\t Electric Field \t\t\t\n";
	cout << " Do you know the value of force (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;
	if ( choice == 'n' || choice == 'N' )
	{
		force = f();
	}
	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Force : ";
		cin >> force ;
	}
	else 
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	cout << " Enter the Charge : " ;
	cin >> q;  	// charge of particle
	
	electric_field = force/q;
	cout << "Electric Field = "; 
	
	return electric_field ;
	
}


int Eflux()  	//Electric Flux
{
	double electric_flux,electric_field,area,angle ; 
	char choice;
	
	cout << "\t\t\t Electric Flux \t\t\t\n";
	cout << " Do you know the value of Electric Field (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;
	if ( choice == 'n' || choice == 'N' )
	{
		electric_field = E();
	}
	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Electric Field : " ;
		cin >> electric_field ;
	}
	else 
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	
	cout << " Enter the Area : ";
	cin >> area ;
	cout << " Enter Angle b/w Electric Field & Area ( In radian ) : " ;
	cin >> angle ;
	
	electric_flux = electric_field*area*cos(angle);
	cout << " Electric Flux = ";
	
	return electric_flux ;
	
}

int Edipole()
{
	double electric_dipole,q,a; 		// a is distance (represented as 2a)
	
	cout << "\t\t\t Electric Dipole \t\t\t\n";
	cout << " Enter Value of Charge : ";
	cin >> q;
	cout << " Enter the Distance (2a) : ";
	cin >> a;
    
    electric_dipole = q*a;
    cout << " Electric Dipole = ";

    return electric_dipole;
    
}

void torque()
{
	double torq,electric_dipole,electric_field,angle ;
	char choice1,choice2 ;
	
	cout << "\t\t\t Torque \t\t\t\n";
	cout << " Do you know the value of Electric Field (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong) for electric field
	cin >> choice1 ; 
	if ( choice1 == 'n' || choice1 == 'N' )
	{
		electric_field = E();
	}
	else if ( choice1 == 'y' || choice1 == 'Y' )
	{
		cout << " Enter the Electric Field : " ;
		cin >> electric_field ;
	}
	else 
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	
	cout << " Do you know the value of Electric Dipole (y/n) \n > " ;
	y:  	// y is to repeatly type answer (if wrong) for electric dipole
	cin >> choice2 ;
	if ( choice2 == 'n' || choice2 == 'N' )
	{
		electric_dipole = Edipole();
	}
	else if ( choice2 == 'y' || choice2 == 'Y' )
	{
		cout << " Enter the Electric Dipole : " ;
		cin >> electric_dipole ;
	}
	else 
	{
		cout<< " Wrong Input \n > " ;
		goto y;
	}
	cout << " Enter Angle b/w Electric Dipole & Electric Field ( In radian ) : " ;
	cin >> angle ;
	
	torq = electric_dipole * electric_field *sin(angle) ;
	cout << " Torque = " << torq << endl ;
}

void EofDipole_al() 		// Electric Field OF An Electric Dipole At Axial Line (al)

{
	double electric_field,electric_dipole,r ;  	//r is distance
	char choice;
	
	cout << "\t\t\t Electric Field OF An Electric Dipole (At Axial Line) \t\t\t\n";
	cout << " Do you know the value of Electric Dipole (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;
	if ( choice == 'n' || choice == 'N' )
	{
		electric_dipole = Edipole();
	}
	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Electric Dipole : " ;
		cin >> electric_dipole ;

	}
	else 
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	cout << " Enter the Distance (r) : " ;
	cin >> r;
	
	electric_field = k*2*electric_dipole/(pow(r,3));
	cout << " Electric Field = " << electric_field << endl ;
	
} 

void EofDipole_el() 		// Electric Field OF An Electric Dipole At Equatorial Line (el)

{
	double electric_field,electric_dipole,r ;  	//r is distance
	char choice;
	
	cout << "\t\t\t Electric Field OF An Electric Dipole (At Equatorial Line) \t\t\t\n";
	cout << " Do you know the value of Electric Dipole (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;
	if ( choice == 'n' || choice == 'N' )
	{
		electric_dipole = Edipole();
	}
	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Electric Dipole : " ;
		cin >> electric_dipole ;

	}
	else 
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	cout << " Enter the Distance (r) : " ;
	cin >> r;
	
	electric_field = (-1) *k*electric_dipole/(pow(r,3)); 	/* (-1) Indicate Electric Field is 
																Opposite to Electric Dipole */
	cout << " Electric Field = " << electric_field << endl ;
	
} 
	

#endif
