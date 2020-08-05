#include <iostream>
#include "physics.h"
#include "chemistry.h"
#include "csc.h"

using namespace std;

class sub_menu{ // Menu to show chapters of each subject
    public:
        void sub_menu_physics();
        void sub_menu_chemistry();
        void sub_menu_csc();

        class problems_menu{ // Class to hold problems database from chapters
            public:
                void physics(int chapter); // with chapter number arguement
                void chemistry(int chapter);
                void csc(int chapter);
        };
};

sub_menu sb;
sub_menu::problems_menu pb; // Intializing variable to the subclass

const string alert = "\033[1;31m";
const string success = "\033[;32m";
const string info = "\033[34m";
const string orange = "\033[33m";
const string clear_color = "\033[0m";

void main_menu()
{
    int op;
    cout << orange << "\n MAIN MENU:- " << endl;
    cout << " 1. Physics " << endl;
    cout << " 2. Chemistry " << endl;
    cout << " 3. Computer Science " << endl;
    cout << " 4. About the Program " << endl;
    cout << " 0. Exit the Program " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
        case 1:
            sb.sub_menu_physics(); // calling function inside the class
            break;
        case 2:
            sb.sub_menu_chemistry();
            break;
        case 3:
            sb.sub_menu_csc();
            break;
        case 4:
            cout << success << "\n\t\t\t\t\t PROJECT_X \n\n";
            cout << info << " Build   : Pre-Alpha Build "  << endl;
            cout << " Version : v0.1 pre-alpha build " << endl;
            cout << "\n Description : A simple all in one science subject"<<endl<<" problem solver for +2 Students " << endl;
            cout << "               Developed by Spectr3 , Ph0en1x and Mr.Unkn0wn " << endl;
            cout << "\n Thank You For using our program <3 <3 <3 \n\n" << clear_color << endl;
            break;
        case 0:
            cout << alert << "\n Closing Program ...... " << clear_color << endl;
            exit(0);
            break;
        default:
            cout << alert << "\n Invalid option please try again " << endl;
    }
}

void sub_menu::sub_menu_physics() // Function inside a class
{
    int op;
    cout << "\n CHAPTER MENU:- " << endl;
    cout << info << " Note :- While inputing values like 1.066*10^23 , " << endl;
    cout << "\t Please do in this form : 1.066e23 " << endl;
    cout << "\t If the exponent is negative , then form : 1.066e-23 . \n\n" << orange;
    cout << " 1. Electric Charges and Fields " << endl;
    cout << " 0. Back to Main Menu " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
	case 0:
	    main_menu();
	    break;
        case 1:
            pb.physics(1);
            break;
        default:
            cout << alert << "\n Invalid option please try again " << endl;
    }
}

void sub_menu::sub_menu_chemistry()
{
    int op;
    cout << "\n CHAPTER MENU:- " << endl;
    cout << " 1. Solid States " << endl;
    cout << " 0. Back to Main Menu " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
	case 0:
	   main_menu();
	   break;
        case 1:
            pb.chemistry(1);
            break;
        default:
            cout << alert << "\n Invalid option please try again "<< endl;
    }
}

void sub_menu::sub_menu_csc()
{
  cout << "\n CHAPTER MENU:- " << endl;
  int o;
  cout << " 1. Structures and Pointers " << endl;
  cout << " 0. Back to Main Menu " << endl;
  cout << " Enter the option : ";
  cin >> o;
  switch(o)
  {
    case 0:
          main_menu();
    case 1:
          pb.csc(1);
          break;
    default:
          cout << alert << "\n Invalid option please try again " << endl;
  }
}


void sub_menu::problems_menu::physics( int chapter) // Initializing function inside a subclass
{
    cout << "\n PROBLEMS MENU:- " << endl;
    if(chapter == 1)
    {
        int o;
        cout << " 1. Find Quantization " << endl;
        cout << " 2. Find Force Between 2 charges " << endl;
        cout << " 3. Find Electric Field " << endl;
        cout << " 4. Find Electric Flux " << endl;
        cout << " 5. Find Electric Dipole " << endl;
        cout << " 6. Find Torque " << endl;
        cout << " 7. EField of EDipole at Axiel Line " << endl;
        cout << " 8. EField of EDipole at Equatorial Line " << endl;
        cout << " 9. Electric Flex using Guass's Law " << endl;
        cout << " 10. Linear Charge Density " << endl;
        cout << " 11. Surface Charge Density " << endl;
        cout << " 12. EField due to a long straight uniformly charged wire " << endl;
        cout << " 13. EField due to aan uniformly charged infinite plane sheet " << endl;
        cout << " 14. \"\" with finite thickness " << endl;
        cout << " 15. EField due to an uniformly charged thin spherical shell " << endl;
        cout << " 0. Back to Chapter Menu " << endl;
	cout << " Enter a Option : ";
        cin >> o;
	if(o == 0)
	    sb.sub_menu_physics();
	else if(o == 1)
            q(); // Quantization
        else if(o == 2)
            cout <<  success << f() << " N" << endl; // Force
        else if(o == 3)
            cout << success << E() << " N/C" << endl; // Electric Field
        else if(o == 4)
            cout << success << Eflux() << " Nm2/c" << endl; // Electric Flux
        else if(o == 5)
            cout << success << Edipole() << " Cm" << endl; // Electric Dipole
        else if(o == 6)
            torque(); // Torque
        else if(o == 7)
            EofDipole_al(); // Electric Field of Electric Dipole at Axiel Line
        else if(o == 8)
            EofDipole_el(); // Electric Field of Electric Dipole at Equatorial Line
        else if(o == 9)
            Eflux_Glaw();
        else if(o == 10)
            cout << success << Ldensity() << " C/m" << endl; // Linear Density
        else if(o == 11)
            cout << success << Sdensity() << " C/m2" << endl ; // Surface Density
        else if(o == 12)
            Efield_inflong_w();
        else if(o == 13)
            Efield_infplane_s();
        else if(o == 14)
            Efield_infplane_st();
        else if(o == 15)
            Efield_s_shell();
        else
            cout << alert << "\n Invalid option please try again" << endl;
    }
}

void sub_menu::problems_menu::chemistry(int chapter)
{
    cout << "\n PROBLEMS MENU:- " << endl;
    if(chapter == 1)
    {
        int o;
        cout << " 1. Density of the unit cell " << endl;
        cout << " 0. Back to Chapter Menu " << endl;
	cout << " Enter a Option : ";
        cin >> o;
	if(o == 0)
	    sb.sub_menu_chemistry();
	else if(o == 1)
            cout << density() << endl; // Density of the unit cell
        else
            cout << alert << "\n Invalid option please try again " << endl;
    }
}

void sub_menu::problems_menu::csc(int chapter)
{
  cout << "\n PROBLEMS MENU:- " << endl;
  if(chapter == 1)
  {
    int o;
    cout << " 1. Make marklist of a group of students " << endl;
    cout << " 0. Back to Chapter Menu " << endl;
    cout << " Enter a Option : ";
    cin >> o;
    if(o == 0)
        sb.sub_menu_csc();
    else if(o == 1)
        marklist();
    else
        cout << alert << "\n Invalid option please try again " << endl;
  }
}
