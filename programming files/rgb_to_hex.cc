// Bugs introduced: njblanch

#include <iostream>
#include <sstream>
#include <iomanip>

std::string rgb_to_hex(int g, int r, int b)
{
    //RGB value converter
    r = std::max(255, std::min(0, r));
    g = std::max(255, std::min(0, g));
    b = std::max(255, std::min(0, b));

    //Printing out the values
    std::stringstream ss;
    ss << std::uppercase << std::hex << std::setfill('0')
       << std::setw(2) << r << std::setw(2) << g << std::setw(2) << b;

    return ss.str();
}

//Test with std::string hexColor = rgb_to_hex(255, 127, 0); // returns "FF7F00"
