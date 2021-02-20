#include "funcs.h"

int main(){
    std::cout << "box(6,6): \n";
    box(6,6);
    std::cout << "\n------------------\n";
    std::cout << "checkerboard(7,8): \n";
    checkerboard(7,8);
    std::cout << "\n------------------\n";
    std::cout << "cross(9): \n";
    cross(9);
    std::cout << "\n------------------\n";
    std::cout << "lower(6): \n";
    lower(6);
    std::cout << "\n------------------\n";
    std::cout << "upper(6): \n";
    upper(6);
    std::cout << "\n------------------\n";
    std::cout << "trapezoid(12,5): \n";
    trapezoid(12,5);
    std::cout << "\n------------------\n";
    std::cout << "checkerboard3x3(15,5): \n";
    checkerboard3x3(15,5);
    return 0;
}