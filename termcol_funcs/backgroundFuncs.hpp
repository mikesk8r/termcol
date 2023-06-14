#include <iostream>
#include <string>

namespace termcol
{
    void bgRed(string text)
    {
        cout << "\033[31;7m" << text << "\033[0m";
    }

    void bgGreen(string text)
    {
        cout << "\033[32;7m" << text << "\033[0m";
    }

    void bgYellow(string text)
    {
        cout << "\033[33;7m" << text << "\033[0m";
    }

    void bgBlue(string text)
    {
        cout << "\033[34;7m" << text << "\033[0m";
    }

    void bgMagenta(string text)
    {
        cout << "\033[35;7m" << text << "\033[0m";
    }

    void bgCyan(string text)
    {
        cout << "\033[36;7m" << text << "\033[0m";
    }

    void bgWhite(string text)
    {
        cout << "\033[37;7m" << text << "\033[0m";
    }

    void bgBrightRed(string text)
    {
        cout << "\033[31;1;7m" << text << "\033[0m";
    }

    void bgBrightGreen(string text)
    {
        cout << "\033[32;1;7m" << text << "\033[0m";
    }

    void bgBrightYellow(string text)
    {
        cout << "\033[33;1;7m" << text << "\033[0m";
    }

    void bgBrightBlue(string text)
    {
        cout << "\033[34;1;7m" << text << "\033[0m";
    }

    void bgBrightMagenta(string text)
    {
        cout << "\033[35;1;7m" << text << "\033[0m";
    }

    void bgBrightCyan(string text)
    {
        cout << "\033[36;1;7m" << text << "\033[0m";
    }

    void bgBrightWhite(string text)
    {
        cout << "\033[37;1;7m" << text << "\033[0m";
    }
}
