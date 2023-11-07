#include <iostream>

int main() {
    // the cocnstant key word specifies a variable's value is constant
    // tells the compiller to prevent anything to modifying it
    //(read-only)
    const double PI = 3.14159;  //If try to change the variable taht is constant an error it will be returned
    // PI = 8.00;
    double radius = 10;
    double circumferernce = 2*PI*radius;

    std::cout << circumferernce << "cm";

    return 0;
}