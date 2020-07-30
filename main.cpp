#include "menus.cpp"
#include <iostream>
#include <string>

using namespace std;

void main_menu(); // The Main menu , Shows Subjects Option


int main()
{
    main_menu();
    #ifdef _WIN64
        system("pause");
    #endif
    return 0;
}

void main_menu()
{
    int op;
    sub_menu sb; // Initializing class variable , its a pointer variable
    cout << " 1. Physics " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
        case 1:
            sb.sub_menu_physics(); // calling function inside the class
            break;
        default:
            cout << " Invalid Option Please Try Again " << endl;
    } 
}


