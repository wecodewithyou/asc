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


void f() 	// Coulomb's Law

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
	cout<<" Force = " << force <<endl;
	
}
	

void E()  	//Electric Field

{
	double electric_field,force,q;
	
	cout << " Enter the Force : ";
	cin >> force;
	cout << " Enter the Charge : " ;
	cin >> q;  	// charge of particle
	
	electric_field = force/q;
	cout << " Electric Field = " << electric_field << endl;
	
}


void Eflux()  	//Electric Flux

{
	double electric_flux,electric_field,area,angle ; 
	
	cout << " Enter the Electric Field : " ;
	cin >> electric_field ;
	cout << " Enter the Area : ";
	cin >> area ;
	cout << " Enter Angle b/w Electric Field & Area ( In radian ) : " ;
	cin >> angle ;
	
	electric_flux = electric_field*area*cos(angle);
	cout << "  Electric Flux = " << electric_flux << endl ;
	
}


	
