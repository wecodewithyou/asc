#include "menus.cpp"
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <thread>

using namespace std;

void banner(); //the prototype of banner
void show_progress_bar(std::ostream& os, int time, std::string message, char symbol); // progress bar

int main()
{
    cout << "\033[1;36m"; // cyan color
    banner();
    show_progress_bar(std::clog, 100, "Loading", '#');
    cout << "completed!!" << endl;
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

void show_progress_bar(std::ostream& os, int time, std::string message, char symbol = '*')
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
