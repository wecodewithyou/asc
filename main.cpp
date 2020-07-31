#include "menus.cpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void main_menu(); // The Main menu , Shows Subjects Option

void banner(); //the prototype of banner

int main()
{
    banner();
    
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


void banner()

{
    string str;
    fstream file("sangit.txt",ios::in);
    while(getline(file,str))
    {
        cout<< str << endl;

    }
    file.close();

}
