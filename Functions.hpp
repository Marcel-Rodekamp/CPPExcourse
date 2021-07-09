#ifndef CPPCOURSE_FUNCTIONS_HPP
#define CPPCOURSE_FUNCTIONS_HPP

namespace Functions{

// pass by value
void fv(const double x){
    std::cout << x << std::endl;
}
// pass by pointer
void fp(const double * x){
    std::cout << *x << std::endl;
}

// pass by reference
void fr(const double & x){
    std::cout << x << std::endl;
}

void func_example(){
    const double pi = 3.1415;

    fv(pi);
    fp(&pi);
    fr(pi);
}

}

#endif //CPPCOURSE_FUNCTIONS_HPP
