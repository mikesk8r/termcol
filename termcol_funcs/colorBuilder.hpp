#include <iostream>
#include <string>
#include <stdio.h>

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
}
