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
    return 0;
}

void main_menu()
{
    int op;
    sub_menu sb; // Initializing class variable , its a pointer variable
    cout << " 1. Physics " << endl;
    cout << " 4. About the Program " << endl;
    cout << " 0. Exit the Program " << endl;
    cout << " Enter a Option : ";
    cin >> op;
    switch(op)
    {
        case 1:
            sb.sub_menu_physics(); // calling function inside the class
            break;
        case 4:
            cout << "\n\t\t\t\t\t ABOUT THE PROGRAM \n\n";
            cout << " Build   : Pre-Alpha Build "  << endl;
            cout << " Version : v0.1 pre-alpha build " << endl;
            cout << "\n Description : A simple all in one science subject"<<endl<<" problem solver for +2 Students " << endl;
            cout << "               Developed by Spectr3 , Ph0en1x and Mr.Unkn0wn " << endl;
            cout << "\n Thank You For using our program <3 <3 <3 \n\n" << endl;
            break;
        case 5:
            cout << "\n Closing Program ...... " << endl;
            exit(0);
            break;
        default:
            cout << " Invalid Option Please Try Again " << endl;
            exit(1);
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
