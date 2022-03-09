
#include "Complex.hpp"
std::array<double,2> calcIndexForm(double real, double imaginary){
    double norm;
    norm = std::sqrt(real*real+imaginary*imaginary);
    double cos = real/norm;
    double theta = std::acos(cos);
    if(imaginary>=0){
        return std::array<double,2>({norm,theta});
    }
    if(real>0){
        theta = 2 * Complex::PI - theta;
    }
    if(real<0){
        theta = Complex::PI - theta;
    }
    return std::array<double, 2>({norm,theta});
}

std::array<double,2> calcNormalForm(double norm, double angle){
    double re = norm * std::cos(angle);
    double im = norm * std::sin(angle);
    return std::array<double, 2>({re, im});
}
Complex::Complex(){
    re = 0, im =0;
    r = 0, angle=0;
}
Complex::Complex(double real, double imaginary){
    re = real, im = imaginary;
    std::array<double,2> indexForm = calcIndexForm(real, imaginary);
    double r1 = indexForm[0],a1 = indexForm[1];
    r = r1;
    angle = a1;

}

Complex Complex::ComplexIndexForm(double norm, double mainAngle){
    Complex a;
    a.setNorm(norm);
    a.setAngle(mainAngle);
    std::array<double,2> normalForm = calcNormalForm(norm, mainAngle);
    a.setRealPart(normalForm[0]);
    a.setImaginaryPart(normalForm[1]);
    return reinterpret_cast<Complex &&>(a);
}


Complex Complex::power(int b) const{
    double norm = std::pow(this->r, b);
    double mainAngle = this->angle*b;
    return ComplexIndexForm(norm,mainAngle);
}

Complex Complex::power(double b) const{
    double norm = std::pow(this->r, b);
    double mainAngle = this->angle*b;
    return ComplexIndexForm(norm,mainAngle);
}

void Complex::print() const{
    std::cout<<std::showpoint<<std::setprecision(8)<<re<<" + "<<im<<" i "<<std::endl;
}

void Complex::printIndexForm() const {
    std::cout<<std::showpoint<<std::setprecision(8)<<r<<" < "<<std::setprecision(3)<<angle*180/PI<<" ° "<<std::endl;
}
