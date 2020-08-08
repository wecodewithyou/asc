#include "menus.cpp"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <thread>

using namespace std;

void banner(); //the prototype of banner
void show_progress_bar(std::ostream& os, int time, std::string message, wchar_t symbol); // progress bar

int main()
{
    cout << "\033[1;36m"; // cyan color
    show_progress_bar(std::clog, 50, "Loading", 1060);
    cout << "completed!!" << endl;
    system("clear");
    banner();
    main_menu();
    cout << "\033[0m"; // normal color , white on black
    return 0;
}

void banner()

{
    cout << R"(



  _______ _______ _______     __          __             _____    _______
 |   _   |   _   |   _   |   |  |--.-----|  |_.---.-.   | _   |  |   _   |
 |.  1   |   1___|.  1___|   |  _  |  -__|   _|  _  |   |.|   |__|.  |   |
 |.  _   |____   |.  |___    |_____|_____|____|___._|   `-|.  |__|.  |   |
 |:  |   |:  1   |:  1   |                                |:  |  |:  1   |
 |::.|:. |::.. . |::.. . |                                |::.|  |::.. . |
 `--- ---`-------`-------'                                `---'  `-------'




                GITHUB:https://www.github.com/wecodewithyou
                CONTACT INFO:wecodewithyou2020@protonmail.com
                DEVS:Mr.Unkn0wn,Ph0en1x,Sp3ctr3
		)";
	cout << "\n";
}

void show_progress_bar(std::ostream& os, int time, std::string message, wchar_t symbol)
{
    static const auto bar_length = 60;
    // not including the percentage figure and spaces

    if (message.length() >= bar_length) {
        os << message << '\n';
        message.clear();
    } else {
        message += " ";
    }

    const auto progress_level = 100.0 / (bar_length - message.length());

    std::cout << message;

    for (double percentage = 0; percentage <= 100; percentage += progress_level) {
        message += symbol;
        os << "\r [" << std::setw(3) << static_cast<int>(percentage) << "%] "
           << message << std::flush;
        std::this_thread::sleep_for(std::chrono::milliseconds(time));
    }
    os << "\n";
}
