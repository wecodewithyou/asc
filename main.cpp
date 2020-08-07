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
    banner();
    show_progress_bar(std::clog, 100, "Loading", 1060);
    cout << "completed!!" << endl;
    main_menu();
    cout << "\033[0m"; // normal color , white on black
    return 0;
}

void banner()

{
    cout << R"( ____    ____     ___        _   _____    ____   _____          __  __
|  _ \  |  _ \   / _ \      | | | ____|  / ___| |_   _|         \ \/ /
| |_) | | |_) | | | | |  _  | | |  _|   | |       | |    _____   \  /
|  __/  |  _ <  | |_| | | |_| | | |___  | |___    | |   |_____|  /  \
|_|     |_| \_\  \___/   \___/  |_____|  \____|   |_|           /_/\_\


                GITHUB:https://www.github.com/wecodewithyou
                CONTACT INFO:wecodewithyou2020@protonmail.com
                DEVS:Mr.Unkn0wn,Ph0en1x,Sp3ctr3 
		)";
	cout << "\n\n";
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
