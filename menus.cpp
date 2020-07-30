#include <iostream>
#include "physics.h"
using namespace std;

class sub_menu{ // Menu to show chapters of each subject
    public:
        void sub_menu_physics();
        /** Upcoming sub_menus
          * void sub_menu_maths();
          * void sub_menu_physics();
          * void sub_menu_csc();
        **/
        class problems_menu{ // Class to hold problems database from chapters
            public:
                void physics();
                /** Upcoming problems_menu
                  * void maths();
                  * void chemistry();
                  * void csc();
                **/
        };
};

void sub_menu::sub_menu_physics() // Function inside a class
{
    sub_menu::problems_menu pb; // Intializing variable to the subclass
    int op;
    cout << " 1. Chapter 1 " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
        case 1:
            pb.physics();
            break;
        default:
            cout << " Invalid Option Please Try Again " << endl;
    }
}

void sub_menu::problems_menu::physics() // Initializing function inside a subclass
{
    int o;
    cout << " 1. Find Q " << endl;
    cout << " 2. Find Force Between 2 charges " << endl;
    cout << " Enter a Option : ";
    cin >> o;
    if(o == 1)
        q(); // calling function inside the headerfile
    else if(o == 2)
        f();
    else
         cout << " Invalid Option " << endl;
}