#include "menus.cpp"
#include <iostream>
#include <string>

using namespace std;

void banner(); //the prototype of banner

int main()
{
    cout << "\033[1;36m"; // cyan color
    #ifdef _WIN32
    	system("cls");
    #elif _WIN64
	system("cls");
    #elif __linux__
	system("clear");
    #endif	
    banner();
    main_menu();
    cout << "\033[0m"; // normal color , white on black
    return 0;
}

void banner()

{
    cout << R"(


 ______     ______     ______       
/\  __ \   /\  ___\   /\  ___\      
\ \  __ \  \ \___  \  \ \ \____     
 \ \_\ \_\  \/\_____\  \ \_____\    
  \/_/\/_/   \/_____/   \/_____/    
                                    


                GITHUB:https://www.github.com/wecodewithyou
                CONTACT INFO:wecodewithyou2020@protonmail.com
                DEVS:Mr.Unkn0wn,Ph0en1x,Sp3ctr3
		)";
	cout << "\n";
}

