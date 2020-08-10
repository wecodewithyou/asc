#ifndef __PHYSICS_HINCLUDED__ // header lock
#define __PHYSICS_HINCLUDED__

#include<iostream>
#include<cmath>
using namespace std;

// Constants

const double e = 1.6e-19; 	// e is the charge of Proton or electrons
const double k = 9e9;  // coulomb's law constant [ k = 1/4*pi*e0 ]
const double e0 = 8.854e-12; 	// Electric Permitivity in free space

						/*
							// Chapter 1 \\
					// Electric Charges and Fields \\
														*/
double q()  	//Quantization
{
	double q,n;
	cout << "\n Quantization :- " << endl;
	cout << " Enter no.of particles : ";
	cin >> n;		//No.of Protons or Electrons

	q = n*e;	//Quantization Of Charge (Eqn)
	cout <<" Charge = "<< q << " C" << endl; 	//charge on a body
	return q ;

}


double f() 	// Coulomb's Law
{
	double q1,q2,r,force; 	//q1,q2 : charges , r : distance b/w charges

	cout << "\n Force :- " << endl;
	cout << " Enter first charge : ";
	cin >> q1;
	cout << " Enter second charge : ";
	cin >> q2;
	cout <<" Enter the distance : ";
	cin >> r;

	force = k*q1*q2/(pow(r, 2));  	// Force b/w charges
	cout << " Force = " << force << " N " << endl;

	return force ;

}


double E()  	//Electric Field
{
	double electric_field,force,q;  	// choice is to determine Unknown force
	char choice;

	cout << "\n Electric Field :- " << endl;
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
	cout << " Electric Field = " << electric_field << " N/C " << endl;

	return electric_field ;

}


double Eflux()  	//Electric Flux
{
	double electric_flux,electric_field,area,angle ;
	char choice;

	cout << "\n Electric Flux :- " << endl;
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
	cout << " Electric Flux = " << electric_flux << " Nm2/c " << endl;

	return electric_flux ;

}

double Edipole()
{
	double electric_dipole,q,a; 		// a is distance (represented as 2a)

	cout << "\n Electric Dipole :- " << endl;
	cout << " Enter Value of Charge : ";
	cin >> q;
	cout << " Enter the Distance (2a) : ";
	cin >> a;

    electric_dipole = q*a;
    cout << " Electric Dipole = " << electric_dipole << " Cm " << endl;

    return electric_dipole;

}

void torque()
{
	double torq,electric_dipole,electric_field,angle ;
	char choice1,choice2 ;

	cout << "\n Torque :- " << endl;
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
	cout << " Torque = " << torq << " N/m" << endl ;
}

void EofDipole_al() 		// Electric Field OF An Electric Dipole At Axial Line (al)

{
	double electric_field,electric_dipole,r,a ;  	//r is distance , a is distance b/w charges
	char choice;

	cout << "\n Electric Field OF An Electric Dipole (At Axial Line):- " << endl;
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
	cout << " Enter the Distance b/w Charges : ";
	cin >> a;

	electric_field = k*2*r*electric_dipole/(pow(pow(r,2)-pow(a/2,2),2));
	cout << " Electric Field = " << electric_field << " N/C" << endl ;

}

void EofDipole_el() 		// Electric Field OF An Electric Dipole At Equatorial Line (el)

{
	double electric_field,electric_dipole,r,a ;  	//r is distance , a is distance b/w charges
	char choice;

	cout << "\n Electric Field OF An Electric Dipole (At Equatorial Line):- " << endl;
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
	cout << " Enter the Distance b/w Charges : ";
	cin >> a;

	electric_field = (-1) *k*electric_dipole/(pow(pow(r,2)-pow(a/2,2),3/2)); 	/* (-1) Indicate Electric Field is
																					Opposite to Electric Dipole */
	cout << " Electric Field = " << electric_field << " N/C" << endl ;

}

void Eflux_Glaw() 	// Electric Flux using Gauss's Law

{
	double electric_flux,q; 		// a is distance (represented as 2a)

	cout << "\n Electric Flux Guass's Law:- " << endl;
	cout << " Enter Value of Charge : ";
	cin >> q;

    electric_flux = q/e0 ;
    cout << " Electric Flux = " << electric_flux << " Nm2/C" << endl ;

 }

 double Ldensity()  	// Linear Charge Density

 {
	double linear_density,q,length ;

	cout << "\n Linear Charge Density :- " << endl;
	cout << " Enter Value of Charge : ";
	cin >> q;
	cout << " Enter the Length : " ;
	cin >> length ;

    linear_density = q/length ;
    cout << " Linear Charge Density = ";
		return linear_density;

 }

 double Sdensity() 	// Surface Charge Density

 {
	double surface_density,q,surface_area ;

	cout << "\n Surface Charge Density :- " << endl;
	cout << " Enter Value of Charge : ";
	cin >> q;
	cout << " Enter the surface Area : " ;
	cin >> surface_area ;

    surface_density = q/surface_area ;
    cout << " Surface Charge Density = "  << surface_density << " C/m " << endl;

    return surface_density ;

 }


 void Efield_inflong_w()  	// Electric Field due to an infinitely long straight uniformly charged wire

 {

	double electric_field, linear_density, distance ;
	char choice;

	cout << "\n Electric Field Charged Wire :- " << endl;
	cout << " Do you know the value of Linear Charge Density (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;
	if ( choice == 'n' || choice == 'N' )
	{
		linear_density = Ldensity();
	}
	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Linear Charge Density : " << linear_density << " C/m2 " << endl;
		cin >> linear_density ;

	}
	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	cout << " Enter the Distance : " ;
	cin >> distance ;

    electric_field = k * 2*linear_density/distance ;
    cout << " Electric Field = " << electric_field << " N/C" << endl ;

 }

 void Efield_infplane_s()  	// Electric Field due to an uniformly charged infinite plane sheet

 {

	double electric_field, surface_density ;
	char choice;

	cout << "\n Electric Field Plane Sheet :- " << endl;
	cout << " Do you know the value of Surface Charge Density (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;
	if ( choice == 'n' || choice == 'N' )
	{
		surface_density = Sdensity();
	}
	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Surface Charge Density : ";
		cin >> surface_density ;

	}
	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}

    electric_field = surface_density/ 2*e0 ;
    cout << " Electric Field = " << electric_field << " N/C" << endl ;

 }

void Efield_infplane_st()  	/* Electric Field due to an uniformly charged
								infinite plane sheet with finite thickness */

 {

	double electric_field, surface_density ;
	char choice;

	cout << "\n Electric Field Plane Sheet Finite Thickness:- " << endl;
	cout << " Do you know the value of Surface Charge Density (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;
	if ( choice == 'n' || choice == 'N' )
	{
		surface_density = Sdensity();
	}
	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Surface Charge Density : ";
		cin >> surface_density ;

	}
	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}

    electric_field = surface_density/ e0 ;
    cout << " Electric Field = " << electric_field << " N/C" << endl ;

 }

void Efield_s_shell()  	// Electric Field due to an uniformly charged thin spherical shell

{

	double electric_field, surface_density, R , r ;
	char choice;

	cout << "\n Electric Field Spherical Shell :- " << endl;
	cout << " Enter the Radius of Shell : " ;
	cin >> R; 	//  R is the Radius of Shell
	cout << " Enter the Distance From Cetre of Shell : " ;
	cin >> r;	//  r is the Distance From Cetre of Shell

	if ( r < R )
	{
		electric_field = 0 ;
		cout << " Electric Field = " << electric_field << endl ;
		exit(0) ;
	}
		cout << " Do you know the value of Surface Charge Density (y/n) \n > " ;
		x:  	// x is to repeatly type answer (if wrong)
		cin >> choice ;

		if ( choice == 'n' || choice == 'N' )
		{
			surface_density = Sdensity();
		}

		else if ( choice == 'y' || choice == 'Y' )
		{
			cout << " Enter the Surface Charge Density : ";
			cin >> surface_density ;

		}

		else
		{
		cout<< " Wrong Input \n > " ;
			goto x;
		}

	if ( r > R )
	{
		electric_field = surface_density *pow(R,2)/(e0*pow(r,2)) ;
		cout << " Electric Field = " << electric_field << endl ;
		exit(0);
	}

	if ( r == R )
	{
		electric_field = surface_density/e0 ;
		cout << " Electric Field = " << electric_field << endl ;
	}

}

			/*
				  // Chapter 1 Finished \\


						// Chapter 3 \\
				   // Current Electricity \\
												*/


double I()

{

	double time , current, qc;
	char choice ;
	cout << "\n Current :- " << endl;
	cout << " Enter the Time Taken : " ;
	cin >> time;
	cout << " Do you know the value of Charge (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		qc = q();  		// qc is Charge
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Charge : ";
		cin >> qc ;

	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}


	current = qc / time ;
	cout << " Current = " << current << " A " << endl;
	return current ;

}

double Cdensity () 		// Current Density

{
	double current , area, cdens ;  	// cdens is current density
	char choice ;
	cout << "\n Current Density :- " << endl;
	cout << " Do you know the value of Current (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		current = I();  		
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Current : ";
		cin >> current ;

	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	cout << " Enter the Area " ;
	cin >> area ;

	cdens = current / area ;
	cout << " Current Density = " << cdens << " A/m2 " << endl;

	return cdens ;

}

double vd() 	// Drift Velocity

{
	double vd , electric_field, mass, rt ; 	// rt -> relaxation time || E -> Electric Field
	char choice ;
	cout << "\n Drift Velocity :- " << endl;
	cout << " Enter the Mass : " ;
	cin >> mass;
	cout << " Enter Relaxation Time : " ;
	cin >> rt ;
	cout << " Do you know the value of Electric Field (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		electric_field = E();  		
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Electric Field : ";
		cin >> electric_field ;

	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}

	vd = (-1)*e*electric_field*rt/mass ;
	cout << " Drift Velocity = " << vd << " m/s " << endl;

	return vd ;
}

void mob()  	//Mobility
{
	double Vd , electric_field , mobi ; 	// mobi is the mobility
	char choice;
	
	cout << " Do you know the value of Electric Field (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		double mass , rt ;
		cout << " Enter the Mass : " ;
		cin >> mass;
		cout << " Enter Relaxation Time : " ;
		cin >> rt ;  		
		
		mobi = e * rt/mass;
		goto y;
	}
	

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Electric Field : ";
		cin >> electric_field ;

	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	
	cout << " Do you know the value of Drift Velocity (y/n) \n > " ;
	z:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		Vd = vd();  		
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Drift Velocity : ";
		cin >> Vd ;

	}

	else
	{
		cout<< " Wrong Input \n > " << choice << endl;
		goto z;
	}
	
	mobi = Vd / electric_field ;
	y:
	cout << " Mobility = " << mobi << " mC/Ns" << endl;
}

double R()  	// Resistance

{
	double resistance , length , area , rst; 	//rst is the resistivity
	
	cout << " Enter the length of conductor : ";
	cin >> length ;
	cout << " Enter the Cross Sectional Area of the conductor : ";
	cin >> area ;
	cout << " Enter the Resistivity : " ;
	cin >> rst ;
	
	resistance = rst * length/area ;
	cout << " Resistance = " << resistance << " ohm" << endl;
	
	return resistance ;
	
}

double V() 		// OHM's Law (Potencial Difference)

{
	double potential_difference , current , resistance ;
	char choice, choice1 ;
	
	cout << " Do you know the value of Current (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice , choice1 ;

	if ( choice == 'n' || choice == 'N' )
	{
		current = I();  
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Current : " ;
		cin >> current ;
	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	cout << " Do you know the value of Resistance (y/n) \n > " ;
	z:  	// x is to repeatly type answer (if wrong)
	cin >> choice1 ;

	if ( choice1 == 'n' || choice1 == 'N' )
	{
		resistance = R();  		
	}

	else if ( choice1 == 'y' || choice1 == 'Y' )
	{
		cout << " Enter the Resistance : " ;
		cin >> resistance ;

	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto z;
	}
	
	potential_difference = current * resistance ;
	cout << " Potential Difference = " << potential_difference << " V" << endl;
	
	return potential_difference ;
}

double rst()  	// Resistivity

{
	double resistance , length , area , rst; 	//rst is the resistivity
	
	cout << " Enter the length of conductor : ";
	cin >> length ;
	cout << " Enter the Cross Sectional Area of the conductor : ";
	cin >> area ;
	cout << " Enter the Resistance : " ;
	cin >> resistance ;
	
	rst = resistance * area/length ;
	cout << " Resistivity = " << rst << " ohm m"<< endl;
	
	return rst ;
	
}


void vohm()  	//Vector form of ohm's law

{
	double electric_field , charge_density , resistivity ;
	char choice , choice1;
	
	cout << " Do you know the value of Resistivity (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		resistivity = rst();  
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Value of Resistivity : " ;
		cin >> resistivity ;
	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	
	cout << " Do you know the value of Charge Density (y/n) \n > " ;
	z:  	// x is to repeatly type answer (if wrong)
	cin >> choice1 ;

	if ( choice1 == 'n' || choice1 == 'N' )
	{
		charge_density = Cdensity();  		
	}

	else if ( choice1 == 'y' || choice1 == 'Y' )
	{
		cout << " Enter the Value of Charge Density : " ;
		cin >> charge_density ;
	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto z;
	}
	
	electric_field = charge_density*resistivity ;
	cout << " Electric Field = " << electric_field << " V/m" << endl;
 
}

void G() 	// conductance

{
	double conductance , resistance ;
	char choice ;
	
	cout << " Do you know the value of Resistance (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		resistance = R();  
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Resistance : ";
		cin >> resistance ;
	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}
	
	conductance = 1/resistance ;
	cout << " Conductance = " << conductance << " S" << endl ; // unit is seimen or ohm(inverse)
	
}


void cndct() 	// conductivity

{
	double conductivity , resistivity ;
	char choice ;
	
	cout << " Do you know the value of Resistivity (y/n) \n > " ;
	x:  	// x is to repeatly type answer (if wrong)
	cin >> choice ;

	if ( choice == 'n' || choice == 'N' )
	{
		resistivity = rst();  
	}

	else if ( choice == 'y' || choice == 'Y' )
	{
		cout << " Enter the Value of Resistivity : " ;
		cin >> resistivity ;
	}

	else
	{
		cout<< " Wrong Input \n > " ;
		goto x;
	}

	conductivity = 1/resistiviy ;
	cout << " Conductivity = " << conductiviy << " S/m" << endl ; // unit is seimen/metre or ohm(inverse) metre(inverse)
	
}



#endif
