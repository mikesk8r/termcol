#include <iostream>
#include <string>

#include "colorBuilder.hpp"
#include "../termcol_vars.hpp"

using namespace std;

#pragma once
namespace termcol::text
{
    void red(string text)
    {
        colorBuilder(text, TerminalColors::RED, false, false);
    }

    void green(string text)
    {
        colorBuilder(text, TerminalColors::GREEN, false, false);
    }

    void yellow(string text)
    {
        colorBuilder(text, TerminalColors::YELLOW, false, false);
    }

    void blue(string text)
    {
        colorBuilder(text, TerminalColors::BLUE, false, false);
    }

    void magenta(string text)
    {
        colorBuilder(text, TerminalColors::MAGENTA, false, false);
    }

    void cyan(string text)
    {
        colorBuilder(text, TerminalColors::CYAN, false, false);
    }

    void white(string text)
    {
        colorBuilder(text, TerminalColors::WHITE, false, false);
    }

    void brightBlack(string text)
    {
        colorBuilder(text, TerminalColors::BLACK, true, false);
    }

    void brightRed(string text)
    {
        colorBuilder(text, TerminalColors::RED, true, false);
    }

    void brightGreen(string text)
    {
        colorBuilder(text, TerminalColors::GREEN, true, false);
    }

    void brightYellow(string text)
    {
        colorBuilder(text, TerminalColors::YELLOW, true, false);
    }

    void brightBlue(string text)
    {
        colorBuilder(text, TerminalColors::BLUE, true, false);
    }

    void brightMagenta(string text)
    {
        colorBuilder(text, TerminalColors::MAGENTA, true, false);
    }

    void brightCyan(string text)
    {
        colorBuilder(text, TerminalColors::CYAN, true, false);
    }

    void brightWhite(string text)
    {
        colorBuilder(text, TerminalColors::WHITE, true, false);
    }
}
