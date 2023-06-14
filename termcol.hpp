#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

enum TerminalColors {
    RED = 31,
    GREEN = 32,
    YELLOW = 33,
    BLUE = 34,
    MAGENTA = 35,
    CYAN = 36,
    WHITE = 37
};

namespace termcol
{
    /**
    * @param (string) text The text to be used.
    * @param color The color to be used.
    * @param isBright Whether the text color is bright or not.
    * @param isBackground Whether the color should be used as the background.
    */
    void colorBuilder(string text, int color, bool isBright, bool isBackground)
    {
        string escapeCode = "\033[";
        escapeCode.append(to_string(color));
        if (isBright == true) { escapeCode.append(";1"); };
        if (isBackground == true) { escapeCode.append(";7"); };
        escapeCode.append("m");
        cout << escapeCode << text << "\033[0m";
    }

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

namespace termcol::Utils
{
    void test()
    {
        termcol::red("test\n");
        termcol::green("test\n");
        termcol::yellow("test\n");
        termcol::blue("test\n");
        termcol::magenta("test\n");
        termcol::cyan("test\n");
        termcol::white("test\n");
        termcol::brightBlack("test\n");
        termcol::brightRed("test\n");
        termcol::brightGreen("test\n");
        termcol::brightYellow("test\n");
        termcol::brightBlue("test\n");
        termcol::brightMagenta("test\n");
        termcol::brightCyan("test\n");
        termcol::brightWhite("test\n");
        termcol::bgRed("test\n");
        termcol::bgGreen("test\n");
        termcol::bgYellow("test\n");
        termcol::bgBlue("test\n");
        termcol::bgMagenta("test\n");
        termcol::bgCyan("test\n");
        termcol::bgWhite("test\n");
        termcol::bgBrightRed("test\n");
        termcol::bgBrightGreen("test\n");
        termcol::bgBrightYellow("test\n");
        termcol::bgBrightBlue("test\n");
        termcol::bgBrightMagenta("test\n");
        termcol::bgBrightCyan("test\n");
        termcol::bgBrightWhite("test\n");
    }
}
