#include <iostream>
#include <fstream>
#include "roots.h"
#include <string>

int main() {

    std::ifstream input("Input.txt");
    if(!input.is_open()){
        std::cout << "input file error" << std::endl;
    }

    std::ofstream output("Output.txt");
    if(!output.is_open()){
        std::cout << "output file error" << std::endl;
    }

    double A, B, C;
    if (Input(A, B, C, input)){
        std::string res = SpecialCases(A, B, C);

        if(res.empty()){
            std::vector<double> result = Roots(A, B, C);
            PrintResult(result, output);
        }
        else{
            PrintResult(res, output);
        }

    }

    return 0;
}
