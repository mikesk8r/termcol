#include <iostream>
#include <string>
using namespace std;

namespace Colors
{
    void red(string text)
    {
        cout << "\033[31m" << text << "\033[0m";
    }

    void green(string text)
    {
        cout << "\033[32m" << text << "\033[0m";
    }

    void yellow(string text)
    {
        cout << "\033[33m" << text << "\033[0m";
    }

    void blue(string text)
    {
        cout << "\033[34m" << text << "\033[0m";
    }

    void magenta(string text)
    {
        cout << "\033[35m" << text << "\033[0m";
    }

    void cyan(string text)
    {
        cout << "\033[36m" << text << "\033[0m";
    }

    void white(string text)
    {
        cout << "\033[37m" << text << "\033[0m";
    }

    void brightBlack(string text)
    {
        cout << "\033[1;30m" << text << "\033[0m";
    }

    void brightRed(string text)
    {
        cout << "\033[1;31m" << text << "\033[0m";
    }

    void brightGreen(string text)
    {
        cout << "\033[1;32m" << text << "\033[0m";
    }

    void brightYellow(string text)
    {
        cout << "\033[1;33m" << text << "\033[0m"; 
    }

    void brightBlue(string text)
    {
        cout << "\033[1;34m" << text << "\033[0m";
    }

    void brightMagenta(string text)
    {
        cout << "\033[1;35m" << text << "\033[0m";
    }

    void brightCyan(string text)
    {
        cout << "\033[1;36m" << text << "\033[0m";
    }

    void brightWhite(string text)
    {
        cout << "\033[1;37m" << text << "\033[0m";
    }
}

