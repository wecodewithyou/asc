#include <iostream>
#include "physics.h"
#include "chemistry.h"
using namespace std;

class sub_menu{ // Menu to show chapters of each subject
    public:
        void sub_menu_physics();
        void sub_menu_chemistry();

        class problems_menu{ // Class to hold problems database from chapters
            public:
                void physics(int chapter); // with chapter number arguement
                void chemistry(int chapter);
        };
};

sub_menu sb;
sub_menu::problems_menu pb; // Intializing variable to the subclass

void main_menu()
{
    int op;
    cout << "\n MAIN MENU:- " << endl;
    cout << " 1. Physics " << endl;
    cout << " 2. Chemistry " << endl;
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
        case 4:
            cout << "\n\t\t\t\t\t ABOUT THE PROGRAM \n\n";
            cout << " Build   : Pre-Alpha Build "  << endl;
            cout << " Version : v0.1 pre-alpha build " << endl;
            cout << "\n Description : A simple all in one science subject"<<endl<<" problem solver for +2 Students " << endl;
            cout << "               Developed by Spectr3 , Ph0en1x and Mr.Unkn0wn " << endl;
            cout << "\n Thank You For using our program <3 <3 <3 \n\n" << endl;
            break;
        case 0:
            cout << "\n Closing Program ...... " << endl;
            exit(0);
            break;
        default:
            cout << " Invalid Option Please Try Again " << endl;
            exit(1);
    }
}

void sub_menu::sub_menu_physics() // Function inside a class
{
    int op;
    cout << "\n CHAPTER MENU:- " << endl;
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
            cout << " Invalid Option Please Try Again " << endl;
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
            cout << " Invalid Option Please Try Again " << endl;
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
        cout << " 0. Back to Chapter Menu " << endl;
	cout << " Enter a Option : ";
        cin >> o;
	if(o == 0)
	    sb.sub_menu_physics();
	else if(o == 1)
            q(); // Quantization
        else if(o == 2)
            cout << f() << " N" << endl; // Force
        else if(o == 3)
            cout << E() << " N/C" << endl; // Electric Field
        else if(o == 4)
            cout << Eflux() << " Nm2/c" << endl; // Electric Flux
        else if(o == 5)
            cout << Edipole() << " Cm" << endl; // Electric Dipole
        else if(o == 6)
            torque(); // Torque
        else if(o == 7)
            EofDipole_al(); // Electric Field of Electric Dipole at Axiel Line
        else if(o == 8)
            EofDipole_el(); // Electric Field of Electric Dipole at Equatorial Line
        else if(o == 9)
            Eflux_Glaw();
        else if(o == 10)
            cout << Ldensity() << "C" << endl;
        else if(o == 11)
            Sdensity();
        else if(o == 12)
            Efield_inflong_w();
        else
            cout << " Invalid Option " << endl;
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
            cout << " Invalid Option " << endl;
    }
}
