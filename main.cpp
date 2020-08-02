#include "menus.cpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void banner(); //the prototype of banner

int main()
{
    banner();
    main_menu();
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
