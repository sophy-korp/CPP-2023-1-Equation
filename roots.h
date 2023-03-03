#ifndef QUADEQUEL2_ROOTS_H
#define QUADEQUEL2_ROOTS_H

#include<vector>

bool Input(double& A, double& B, double& C, std::ifstream& input);
std::string SpecialCases(double A, double B, double C);
std::vector<double> Roots(double A, double B, double C);
void PrintResult(std::vector <double> result, std::ofstream& output);
void PrintResult(std::string result, std::ofstream& output);


#endif //QUADEQUEL2_ROOTS_H
