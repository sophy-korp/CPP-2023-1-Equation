#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <string>


bool Input(double& A, double& B, double& C, std::ifstream& input){
    input >> A >> B >> C;
    if(input.fail()){
        std::cout << "Incorrect input" << std::endl;
        return false;
    }
    return true;

}

double Discriminant(double A, double B, double C){
    double D = pow(B,2) - 4 * A * C;
    return D;
}

std::string SpecialCases(double A, double B, double C){
    std::string result;
    if(A == 0){
        if(B == 0){
            if(C == 0){
                result = "All real numbers";
            }
            else{
                result = "No real roots";
            }
        }
    }
    else{
        if(B == 0 and C != 0 and -C/A < 0){
            result = "No real roots";
        }
        if(B != 0 and C != 0 and Discriminant(A, B, C) < 0){
            result = "No real roots";
        }
    }
    return result;
}

std::vector<double> Roots(double A, double B, double C) {
    std::vector<double> result;
    double D = Discriminant(A, B, C);
    if(A == 0){
        if(B != 0){
            double root = -C/B;
            result.push_back(root);

        }
    }
    else if(B == 0){
        if (-C/A >= 0){
            double root = sqrt(-C/A);
            result.push_back(root);
            result.push_back(-root);

        }
    }
    else if(C == 0){
        double root1 = 0;
        double root2 = -B/A;
        result.push_back(root1);
        result.push_back(root2);

    }
    else if(D > 0 ){
        double root1 = ((-B) + sqrt(D)) / 2 * A;
        double root2 = ((-B) - sqrt(D)) / 2 * A;
        result.push_back(root1);
        result.push_back(root2);

    }
    else if(D == 0){
        double root = (-B) / (2 * A);
        result.push_back(root);

    }

    return result;
}

void PrintResult(std::vector <double> result, std::ofstream& output){
    for(int i = 0; i < result.size(); i++){
        output << result.at(i) << " ";
    }
}

void PrintResult(std::string result, std::ofstream& output){
   
    output << result;
}
