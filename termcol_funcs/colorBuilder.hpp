#include <iostream>
#include <string>
#include <stdio.h>
#ifdef _WIN32
    #include <windows.h>
#endif

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
        #ifndef _WIN32
            string escapeCode = "\033[";
            escapeCode.append(to_string(color));
            if (isBright == true) { escapeCode.append(";1"); };
            if (isBackground == true) { escapeCode.append(";7"); };
            escapeCode.append("m");
            cout << escapeCode << text << "\033[0m";
        #else
            HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
            int calculatedCode = 0;
            int newColor = color;
            
            if (isBright == true) { newColor += 8; };
            if (isBackground == false) {
                calculatedCode = newColor;
            } else {
                calculatedCode = newColor * 16;
            }

            SetConsoleTextAttribute(consoleHandle, newColor);
            cout << text
            SetConsoleTextAttribute(consoleHandle, 8);
        #endif
    }
}
