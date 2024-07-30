#include "ColorInfo.h"
#include "ColorEnums.h"
#include "ColorPair.h"
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