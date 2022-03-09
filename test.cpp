//
// Created by bak on 2022/3/9.
//
#include "Complex.hpp"
int main(){
    double a = 3, b =4;
    Complex c1(a,b), c2(b,a);
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<"------------------------------------------"<<std::endl;
    std::cout<<"------------------------------------------"<<std::endl;

    std::cout<<"c1 = "<<std::endl;
    c1.print();
    std::cout<<"c2 = "<<std::endl;
    c2.print();

    std::cout<<"c1(indexForm) = "<<std::endl;
    c1.printIndexForm();

    std::cout<<"c1+c2 = "<<std::endl;
    (c1+c2).print();

    std::cout<<"c1-c2 = "<<std::endl;
    (c1-c2).print();

    std::cout<<"c1*c2 = "<<std::endl;
    (c1*c2).print();

    std::cout<<"c1/c2 = "<<std::endl;
    (c1/c2).print();

    std::cout<<"pow(c1,2) = "<<std::endl;
    (c1.power(2)).print();

    std::cout<<"pow(c1,3.14) = "<<std::endl;
    (c1.power(3.14)).print();
}