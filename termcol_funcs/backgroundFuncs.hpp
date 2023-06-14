#include <iostream>
#include <string>

namespace termcol::background
{
    void red(string text)
    {
        cout << "\033[31;7m" << text << "\033[0m";
    }

    void green(string text)
    {
        cout << "\033[32;7m" << text << "\033[0m";
    }

    void yellow(string text)
    {
        cout << "\033[33;7m" << text << "\033[0m";
    }

    void blue(string text)
    {
        cout << "\033[34;7m" << text << "\033[0m";
    }

    void magenta(string text)
    {
        cout << "\033[35;7m" << text << "\033[0m";
    }

    void cyan(string text)
    {
        cout << "\033[36;7m" << text << "\033[0m";
    }

    void white(string text)
    {
        cout << "\033[37;7m" << text << "\033[0m";
    }

    void brightRed(string text)
    {
        cout << "\033[31;1;7m" << text << "\033[0m";
    }

    void brightGreen(string text)
    {
        cout << "\033[32;1;7m" << text << "\033[0m";
    }

    void brightYellow(string text)
    {
        cout << "\033[33;1;7m" << text << "\033[0m";
    }

    void brightBlue(string text)
    {
        cout << "\033[34;1;7m" << text << "\033[0m";
    }

    void brightMagenta(string text)
    {
        cout << "\033[35;1;7m" << text << "\033[0m";
    }

    void brightCyan(string text)
    {
        cout << "\033[36;1;7m" << text << "\033[0m";
    }

    void brightWhite(string text)
    {
        cout << "\033[37;1;7m" << text << "\033[0m";
    }
}
