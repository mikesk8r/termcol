#include <iostream>
#include "termcol.hpp"

int main()
{
    std::cout << "Color test: \n";
    termcol::Utils::test();
    std::cout << "Color builder test: \n";
    termcol::Experimental::colorBuilder("HELLO WORLD\n", termcol::Experimental::TerminalColors::GREEN, false, false);
    termcol::Experimental::colorBuilder("ERRORRRRR\n", termcol::Experimental::TerminalColors::RED, true, true);
    return 0;
}
