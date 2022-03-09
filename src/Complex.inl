#include "Complex.hpp"
inline bool Complex::operator==(Complex b){
    return this->re == b.re && this->im == b.im;
}
inline bool Complex::operator==(double b){
    return this->re == b && this->im == 0;
}
inline Complex Complex::operator+(Complex b){
    return Complex(this->re+b.re, this->im+b.im);
}
inline Complex Complex::operator+(double b){
    return Complex(this->re+b, this->im);
}
inline Complex Complex::operator-(Complex b){
    return Complex(this->re-b.re, this->im-b.im);
}
inline Complex Complex::operator-(double b){
    return Complex(this->re-b, this->im);
}
inline Complex Complex::operator*(Complex b){
    return Complex(this->re*b.re - this->im*b.im, this->re*b.im + this->im*b.re);
}
inline Complex Complex::operator*(double b){
    return Complex(this->re*b, this->im * b);
}
inline Complex Complex::operator/(Complex b){
    return Complex((this->re*b.re + this->im*b.im) / (b.re*b.re+b.im*b.im), (this->im*b.re - this->re*b.im) / (b.re*b.re+b.im*b.im)) ;
}
inline Complex Complex::operator/(double b){
    return Complex(this->re/b, this->im / b);
}
inline double Complex::getRealPart(){
    return re;
}
inline double Complex::getImaginaryPart(){
    return im;
}
inline double Complex::getNorm(){
    return r;
}
inline double Complex::getAngle(){
    return angle;
}

inline void Complex::setRealPart(double real){
    this->re = real;
}
inline void Complex::setImaginaryPart(double imaginary){
    this->im = imaginary;
}
inline void Complex::setNorm(double norm){
    this->r = norm;
}
inline void Complex::setAngle(double mainAngle){
    this->angle = mainAngle;
}