#include "menus.cpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void banner(); //the prototype of banner

int main()
{
    cout << "\033[1;36m"; // cyan color
    banner();
    main_menu();
    cout << "\033[0m"; // normal color , white on black
    return 0;
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
