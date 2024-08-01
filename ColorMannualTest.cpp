#include <iostream>
#include <fstream>
#include <cassert>
#include "ColorEnums.h"


bool checkExistence(const char* filename)
{
     std::ifstream Infield(filename);
     return Infield.good();
}

void testMannual(){
    
    if(!checkExistence("file.txt")){
        std::cout<<"Create the Color Mannual First"<<std::endl;
        return;
    }
    std::ifstream infile("file.txt");
    int number;
    std::string major,minor;
    int expectedNumber = 1;
    int MajorIndexNumber = -1;
    while(infile>>number>>major>>minor){
        int MinorindexNumber = (expectedNumber-1)%5;
        if(MinorindexNumber==0)MajorIndexNumber++;
        assert(number==expectedNumber);
        assert(major==MajorColorNames[MajorIndexNumber]);
        assert(minor==MinorColorNames[MinorindexNumber]);
        expectedNumber++;
    }
    infile.close();
    remove("file.txt");
    std::cout<<"Color Mannual test passes successfully"<<std::endl;
}

