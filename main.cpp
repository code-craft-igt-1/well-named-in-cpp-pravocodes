#include <iostream>
#include <assert.h>
#include "Tests.h"
#include "ColorEnums.h"
#include <iomanip>

void printMannual(){
    int cnt = 1;
    std::cout << std::setw(5) << "No" << std::setw(15) << "Major Color" << std::setw(15) << "Minor Color" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            std::cout << std::setw(5) << cnt << std::setw(15) << MajorColorNames[i] << std::setw(15) << MinorColorNames[j] << std::endl;
            
            cnt++;
        }
    }
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printMannual();

    return 0;
}

