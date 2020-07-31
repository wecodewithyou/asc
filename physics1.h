#include<iostream>
#include<math.h>
using namespace std;

void q()  	//Quantization 	

{
	double e = 1.6e-19,q,n;  	// e is the charge of Proton or electrons
	cout << " Enter no.of particles : ";
	cin >> n;		//No.of Protons or Electrons
	
	q = n*e;	//Quantization Of Charge (Eqn)
	cout <<" Charge : "<< q << endl; 	//charge on a body
	
}


int f() 	// Coulomb's Law

{
	double k = 9e9;	 // coulomb's law constant [ k = 1/4*pi*e0 ]
	double q1,q2,r,force; 	//q1,q2 : charges , r : distance b/w charges
	
	cout << " Enter first charge : ";
	cin >> q1;
	cout << " Enter second charge : ";
	cin >> q2;
	cout <<" Enter the distance : ";
	cin >> r;
	
	force = k*q1*q2/(pow(r, 2));  	// Force b/w charges
	
	return force ;
	
}
	

int E()  	//Electric Field

{
	double electric_field,force,q;  	// choice is to determine Unknown force
	char choice;
	
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
	
	return electric_field ;
	
}


int Eflux()  	//Electric Flux

{
	double electric_flux,electric_field,area,angle ; 
	char choice;
	
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
	
	return electric_flux ;
	
}

int Edipole()

{
	double electric_dipole,q,a; 		// a is distance (represented as 2a)
	
	cout << " Enter Value of Charge : ";
	cin >> q;
	cout << " Enter the Distance (2a) : ";
	cin >> a;
    
    electric_dipole = q*a;
    
    return electric_dipole;
    
}

void torque()

{
	double torq,electric_dipole,electric_field,angle ;
	char choice1,choice2 ;
	
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
