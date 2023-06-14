#include <iostream>
#include <string>
#include <stdio.h>
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

namespace Colors::Experimental
{
    enum TerminalColors {
        RED = 31,
        GREEN = 32,
        YELLOW = 33,
        BLUE = 34,
        MAGENTA = 35,
        CYAN = 36,
        WHITE = 37
    };

    void colorBuilder(string text, int color, bool isBright)
    {
        string escapeCode = "\033[";
        escapeCode.append(to_string(color));
        if (isBright == true) { escapeCode.append(";1"); };
        escapeCode.append("m");
        cout << escapeCode << text << "\033[0m";
    }
}

namespace Colors::Utils
{
    void test()
    {
        Colors::red("test\n");
        Colors::green("test\n");
        Colors::yellow("test\n");
        Colors::blue("test\n");
        Colors::magenta("test\n");
        Colors::cyan("test\n");
        Colors::white("test\n");
        Colors::brightBlack("test\n");
        Colors::brightRed("test\n");
        Colors::brightGreen("test\n");
        Colors::brightYellow("test\n");
        Colors::brightBlue("test\n");
        Colors::brightMagenta("test\n");
        Colors::brightCyan("test\n");
        Colors::brightWhite("test\n");
        Colors::bgRed("test\n");
        Colors::bgGreen("test\n");
        Colors::bgYellow("test\n");
        Colors::bgBlue("test\n");
        Colors::bgMagenta("test\n");
        Colors::bgCyan("test\n");
        Colors::bgWhite("test\n");
        Colors::bgBrightRed("test\n");
        Colors::bgBrightGreen("test\n");
        Colors::bgBrightYellow("test\n");
        Colors::bgBrightBlue("test\n");
        Colors::bgBrightMagenta("test\n");
        Colors::bgBrightCyan("test\n");
        Colors::bgBrightWhite("test\n");
    }
}
