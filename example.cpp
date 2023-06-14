#include <iostream>
#include "termcol.hpp"

int main()
{
    termcol::brightWhite("Hello World!\n");
    termcol::brightBlue("Cool Sample Text\n");
    termcol::red("ERROR!!!!!!!!! NOOOOOOO\n");
    termcol::bgWhite("You can even have background colors!\n");
    std::cout << "Coolest part is, text after it doesn't get polluted! Yay!\n";
    termcol::yellow("However, this library is not supported on all terminals. ");
    termcol::brightGreen("Luckily, most terminals do!\n");
    /*
    // Test the colors
    std::cout << "You can also test all the colors: \n";
    termcol::Utils::test();
    */
    return 0;
}
