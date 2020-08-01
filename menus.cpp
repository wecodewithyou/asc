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

sub_menu::problems_menu pb; // Intializing variable to the subclass

void sub_menu::sub_menu_physics() // Function inside a class
{
    int op;
    cout << " 1. Electric Charges and Fields " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
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
    cout << " 1. Solid States " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
        case 1:
            pb.chemistry(1);
            break;
        default:
            cout << " Invalid Option Please Try Again " << endl; 
    }
}

void sub_menu::problems_menu::physics( int chapter) // Initializing function inside a subclass
{
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
        cout << " Enter a Option : ";
        cin >> o;
        if(o == 1)
            q(); // calling function inside the headerfile
        else if(o == 2)
            cout << f() << endl;
        else if(o == 3)
            cout << E() << endl;
        else if(o == 4)
            cout << Eflux() << endl;
        else if(o == 5)
            cout << Edipole() << endl;
        else if(o == 6)
            torque();
        else if(o == 7)
            EofDipole_al();
        else if(o == 8)
            EofDipole_el();
        else
            cout << " Invalid Option " << endl;
    }
}

void sub_menu::problems_menu::chemistry(int chapter)
{
    if(chapter == 1)
    {
        int o;
        cout << " 1. Density of the unit Cell " << endl;
        cout << " Enter a Option : ";
        cin >> o;
        if(o == 1)
            cout << density() << endl;
        else
            cout << " Invalid Option " << endl;
    }
}