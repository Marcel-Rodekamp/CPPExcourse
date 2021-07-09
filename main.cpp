#include <iostream>
#include <complex>
/* C++
 *
 * This is a collection of different topics related to the C++ language.
 * The different header files implement situations and explanations of certain
 * concepts.
 * Useful references:
 * 1. Geeks For Geeks: https://www.geeksforgeeks.org/c-plus-plus/
 * 2. C++ Standard: https://isocpp.org/
 * 3. Reference: https://en.cppreference.com/w/
 * */

#include "Basics.hpp"
#include "Functions.hpp"
#include "OOP.hpp"
#include "Templates.hpp"

int main() {

//    Basics::ErrorHandling::runtime_err_example();

//    Functions::func_example();
//    OOP::Classes::constr_example();

//    OOP::Polymorphism::print_int(1);
//    OOP::Polymorphism::print_int(1.2);
//    OOP::Polymorphism::print_int(1.6);

//    OOP::Polymorphism::operator_overloading_example();
//    OOP::Polymorphism::runtime_polym_example();
//    OOP::Inheritance::inheritance_example();

    Templates::function<char *>("abc");
    Templates::function<double>(3.1415);
    Templates::function(std::complex<double>(0.,0.));

    return 0;
}
