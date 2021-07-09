#ifndef CPPCOURSE_BASICS_HPP
#define CPPCOURSE_BASICS_HPP

namespace Basics{
namespace ErrorHandling{
// throw
void throw_example(){
    // x >= 0, x < 10
    const int x = -1;

    if (x <= 0 || x > 10){
        std::cerr << "Ohh x is wrong" << std::endl;
        throw x;
    }
}

// try - catch

void try_example(){
    // x >= 0, x < 10
    // if x < 0: x = 0
    int x = -1;

    try {
        if (x <= 0 || x > 10){
            throw x;
        }
    } catch (int e) {
//        std::cerr << "Ohh x is wrong " << e << std::endl;
        x = -1*x;
    }

    std::cout << "x = " << x << std::endl;


}

// std exceptions https://en.cppreference.com/w/cpp/error/exception
// std::runtime_error https://en.cppreference.com/w/cpp/error/runtime_error
void runtime_err_example(){
    int x = -1;

    if (x < 0){
        throw std::runtime_error("Sorry x < 0: at runtime_err_example");
    }
}

// std::bad_alloc https://en.cppreference.com/w/cpp/memory/new/bad_alloc

}
}

#endif //CPPCOURSE_BASICS_HPP
