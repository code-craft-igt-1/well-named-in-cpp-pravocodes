#ifndef COLORPAIR_H
#define COLORPAIR_H
#include <string>
#include "ColorEnums.h"

class ColorPair {
private:
    MajorColor majorColor;
    MinorColor minorColor;
public:
    ColorPair(MajorColor major, MinorColor minor);
    MajorColor getMajor();
    MinorColor getMinor();
    std::string ToString();
};

#endif

