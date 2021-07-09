
#ifndef CPPCOURSE_TEMPLATES_HPP
#define CPPCOURSE_TEMPLATES_HPP
#include <vector>
#include <complex>
namespace Templates{
// https://www.geeksforgeeks.org/templates-cpp/
// function templates
template<typename T>
void function(T x){
    std::cout << x << std::endl;
}

template<typename T>
void function(std::complex<T> x){
    std::cout << std::real(x) << "+i" << std::imag(x) << std::endl;
}

//template<typename ...Ts>
//void f(Ts ...x){
//    std::vector<int> v = {x...};
//    for(const auto & val: v){
//        std::cout << val << std::endl;
//    }
//}

// class templates
template<typename T, bool b = true>
class A {
    T * x_;

    public:
    explicit A(std::size_t N) {
        x_ = new T[N];
    }

    T & f(const T & x){
        if constexpr( b ) {
            return x+1;
        } else {
            return x;
        }
    }

};


// default templates

// automatic template detection

// template specialization
// https://www.geeksforgeeks.org/template-specialization-c/

template<typename T>
void print_int(T x);
}
#endif //CPPCOURSE_TEMPLATES_HPP
