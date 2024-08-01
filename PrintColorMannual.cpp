#include <iostream>
#include <iomanip>
#include "PrintColorMannual.h"
#include "ColorEnums.h" 
#include <fstream>

void printMannual(){

    std::ofstream my_file("file.txt");

    my_file.close();

    std::fstream File;
    File.open("file.txt");
    int cnt = 1;
    std::cout << std::setw(5) << "No" << std::setw(15) << "Major Color" << std::setw(15) << "Minor Color" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cout << std::setw(5) << cnt << std::setw(15) << MajorColorNames[i] << std::setw(15) << MinorColorNames[j] << std::endl;
            File << cnt<<" "<<MajorColorNames[i]<<" "<<MinorColorNames[j]<<std::endl;
            cnt++;
        }
    }
    File.close();
}
