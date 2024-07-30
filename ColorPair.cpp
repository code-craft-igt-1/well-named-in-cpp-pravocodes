#include "ColorPair.h"
#include "ColorEnums.h"
ColorPair::ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {}

MajorColor ColorPair::getMajor() { return majorColor; }
MinorColor ColorPair::getMinor() { return minorColor; }
std::string ColorPair::ToString() {
    return std::string(MajorColorNames[static_cast<int>(majorColor)]) + " " + MinorColorNames[static_cast<int>(minorColor)];
}


