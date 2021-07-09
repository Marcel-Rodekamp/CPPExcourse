/*
 * The OOP section is strongly related to the Geeks for Geeks tutorial
 * https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/
 * */
#ifndef CPPCOURSE_OOP_HPP
#define CPPCOURSE_OOP_HPP

#include <cmath>

namespace OOP{

namespace Classes{
// https://www.geeksforgeeks.org/c-classes-and-objects/
// basic syntax
class ClassName {
    private:
    double x_ = 0.;
    protected:
    public:
    double x = 3.1415;
};

struct StructName {
    double x = 3.1415;

    double f(){
        return x+1;
    }
};

// encapsulation
class Dog {
    private:
    std::string name_;

    public:
//    Dog() = default;

    Dog() : name_("Rex") {
        std::cout << "This is default constructor" << std::endl;
    }

    Dog(const Dog & other) {
        this->name_ = other.name_;
        std::cout << "This is copy constructor" << std::endl;
    }

    Dog(Dog && other){
        std::move(other.name_.begin(),other.name_.end(),this->name_.begin());
        std::cout << "This is move constructor" << std::endl;
    }

    void speak_your_name(){
            std::cout << this->name_ << std::endl;
        }

    const std::string & get_name (){
        return name_;
    }

};

// constructors

// copy constructors

//

void class_example(){
    StructName A;

    std::cout << "A.x before = " << A.x << std::endl;
//    A.x = 0.;
    std::cout << "A.x after  = " << A.f() << std::endl;

}

void encaps_example(){
    Dog magicDog;

    magicDog.speak_your_name();

    const std::string & name = magicDog.get_name();
    std::cout << name << std::endl;
}

void constr_example(){
    Dog d1;
    Dog d2 = std::move(d1);

    d2.speak_your_name();
}
}
namespace Polymorphism{
// https://www.geeksforgeeks.org/polymorphism-in-c/
// function overloading
void print_int(int x){
    std::cout << "x = " << x << std::endl;
}
void print_int(double x){
    std::cout << "x = " << std::floor(x) << std::endl;
}

// operator overloading
class A {
    double * x_;

    public:
    explicit A(std::size_t N) {
        x_ = new double[N];
    }

    double operator()(const std::size_t idx){
        return x_[idx] + 1.;
    }

    double operator()(const A & other){
        return other[0] + this->x_[0];
    }

    double & operator[](const std::size_t idx){
        std::cout << "Non const operator []" << std::endl;
        return x_[idx];
    }

    const double operator[](const std::size_t idx) const{
        std::cout << "const operator []" << std::endl;
        return x_[idx];
    }

};

void operator_overloading_example(){
    A arr(10);
    const A arrC(10);

    std::cout << arr[0] << std::endl;
    arr[0] = 1.;

    const double res = arrC[0];

    std::cout << res << std::endl;
}

// runtime polymorphism

class Base{
    protected:
        int x__ = 0;
    public:
        void f(){
            std::cout << this-> x__ << std::endl;
        }
};

class Child: public Base {
    public:
        void g(){
            std::cout << this->x__+1 << std::endl;
        }
};

void runtime_polym(Base * B){
    B->f();
}

void runtime_polym_example(){
    Base B;
    Child C;

    runtime_polym(&B);
    runtime_polym(&C);

    C.g();
}

}
namespace Inheritance{
// https://www.geeksforgeeks.org/inheritance-in-c/

// Basic Concept

class Base{
    private:
        int p_ = 0;
    protected:
        int x__ = 0;
    public:
        int y = 1;

};

class Child: private Base {
    public:
    void g() {
        std::cout << this->x__ + 1 << std::endl;
    }
};

class ChildChild: public Child {
    public:

//    void g(){
//        std::cout << this->x__+1 << std::endl;
//    }
};

//    void f(){
//        std::cout << this->p_+2 << std::endl;
//    }


void inheritance_example(){
    Child C;

    C.g();
//    C.f();

//    std::cout << "y = " << C.y << std::endl;
}

// Modes of Inheritance
// Public, Protected, Private

// Multiple inheritance Syntax
}
namespace DynamicBinding{
// https://www.geeksforgeeks.org/virtual-functions-and-runtime-polymorphism-in-c-set-1-introduction/
// Virtual classes/class members

}
}
#endif //CPPCOURSE_OOP_HPP
