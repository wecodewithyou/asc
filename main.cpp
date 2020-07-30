#include "menus.cpp"
#include <iostream>
#include <string>

using namespace std;

void main_menu(); // The Main menu , Shows Subjects Option
string getOsName(); // Return the operating system Name

int main()
{
    main_menu();
    if(getOsName() == "Windows32" || getOsName() == "Windows64")
        system("pause"); 
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

string getOsName()
{
    #ifdef _WIN32
    return "Windows32";
    #elif _WIN64
    return "Windows64";
    #elif __APPLE__ || __MACH__
    return "Mac OSX";
    #elif __linux__
    return "Linux";
    #elif __FreeBSD__
    return "FreeBSD";
    #elif __unix || __unix__
    return "Unix";
    #else
    return "Other";
    #endif
}
