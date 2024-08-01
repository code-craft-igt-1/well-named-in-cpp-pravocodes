#include "ColorPair.h"
#include "ColorEnums.h"

ColorPair::ColorPair(MajorColor major, MinorColor minor) : majorColor(major), minorColor(minor) {}

MajorColor ColorPair::getMajor() { return majorColor; }
MinorColor ColorPair::getMinor() { return minorColor; }
std::string ColorPair::ToString() {
    return std::string(MajorColorNames[static_cast<int>(majorColor)]) + " " + MinorColorNames[static_cast<int>(minorColor)];
}
ColorPair GetColorFromPairNumber(int pairNumber) {
        int zeroBasedPairNumber = pairNumber - 1;
        MajorColor majorColor = 
            static_cast<MajorColor>(zeroBasedPairNumber / 5);
        MinorColor minorColor =
            static_cast<MinorColor>(zeroBasedPairNumber % 5);
        return ColorPair(majorColor, minorColor);
    }
int GetPairNumberFromColor(MajorColor major, MinorColor minor) {
    return major * 5 + minor + 1;
}

