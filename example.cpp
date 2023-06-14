#include <iostream>
#include "termcol.hpp"

int main()
{
    Colors::brightWhite("Hello World!\n");
    Colors::brightBlue("Cool Sample Text\n");
    Colors::red("ERROR!!!!!!!!! NOOOOOOO\n");
    Colors::bgWhite("You can even have background colors!\n");
    std::cout << "Coolest part is, text after it doesn't get polluted! Yay!\n";
    Colors::yellow("However, this library is not supported on all terminals. ");
    Colors::brightGreen("Luckily, most terminals do!\n");
    return 0;
}
