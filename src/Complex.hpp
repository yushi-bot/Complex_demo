#pragma once
#ifndef COMPLEX_HPP_INCLUDED
#define COMPLEX_HPP_INCLUDED
#include <cmath>
#include <iostream>
#include <array>
#include <iomanip>

class Complex
{
	public:
        constexpr static const double PI =3.14159265;
		Complex();
		Complex(double real, double imaginary);
        static Complex ComplexIndexForm(double norm, double angle);
		Complex(const Complex& complex)	                =default;
		Complex(Complex&& complex)		                =default;
		~Complex()				                        =default;

		Complex& operator=(const Complex& complex)	    =default;
		Complex& operator=(Complex&& complex)	        =default;
		inline bool operator==(Complex b);
		inline bool operator==(double b);
		inline Complex operator+(Complex b);
		inline Complex operator+(double b);
		inline Complex operator-(Complex b);
		inline Complex operator-(double b);
		inline Complex operator*(Complex b);
		inline Complex operator*(double b);
		inline Complex operator/(Complex b);
		inline Complex operator/(double b);
		inline double getRealPart();
		inline double getImaginaryPart();
		inline double getNorm();
		inline double getAngle();

        inline void setRealPart(double real);
        inline void setImaginaryPart(double imaginary);
        inline void setNorm(double norm);
        inline void setAngle(double mainAngle);


		
		Complex power(int b) const;
		Complex power(double b) const;

		void print();
		void printIndexForm();

	private:
        double re,im;
        double r,angle;
};

std::array<double,2> calcIndexForm(double real, double imaginary);
std::array<double,2> calcNormalForm(double norm, double angle);

#include "Complex.inl"
#endif