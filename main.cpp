#include <iostream>
#include <assert.h>
#include "Tests.h"
#include "ColorEnums.h"
#include <iomanip>
#include "PrintColorMannual.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printMannual();

    return 0;
}
