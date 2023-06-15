#include <iostream>
#include <string>

#include "colorBuilder.hpp"
#include "../termcol_vars.hpp"

using namespace std;

#pragma once
namespace termcol::background
{
    void red(string text)
    {
        colorBuilder(text, TerminalColors::RED, false, true);
    }

    void green(string text)
    {
        colorBuilder(text, TerminalColors::GREEN, false, true);
    }

    void yellow(string text)
    {
        colorBuilder(text, TerminalColors::YELLOW, false, true);
    }

    void blue(string text)
    {
        colorBuilder(text, TerminalColors::BLUE, false, true);
    }

    void magenta(string text)
    {
        colorBuilder(text, TerminalColors::MAGENTA, false, true);
    }

    void cyan(string text)
    {
        colorBuilder(text, TerminalColors::CYAN, false, true);
    }

    void white(string text)
    {
        colorBuilder(text, TerminalColors::WHITE, false, true);
    }

    void brightBlack(string text)
    {
        colorBuilder(text, TerminalColors::BLACK, true, true);
    }

    void brightRed(string text)
    {
        colorBuilder(text, TerminalColors::RED, true, true);
    }

    void brightGreen(string text)
    {
        colorBuilder(text, TerminalColors::GREEN, true, true);
    }

    void brightYellow(string text)
    {
        colorBuilder(text, TerminalColors::YELLOW, true, true);
    }

    void brightBlue(string text)
    {
        colorBuilder(text, TerminalColors::BLUE, true, true);
    }

    void brightMagenta(string text)
    {
        colorBuilder(text, TerminalColors::MAGENTA, true, true);
    }

    void brightCyan(string text)
    {
        colorBuilder(text, TerminalColors::CYAN, true, true);
    }

    void brightWhite(string text)
    {
        colorBuilder(text, TerminalColors::WHITE, true, true);
    }
}
