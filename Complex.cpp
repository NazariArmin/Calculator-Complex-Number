/*
 * Complex.cpp
 *
 *  Created on: May 15, 2018
 *      Author: armin
 */
#include "Complex.h"
#include <iostream>
#include <istream>
using namespace std;
Complex ::Complex(int integer , int imaginary):
		integer(integer),
		imaginary(imaginary)
{
}

Complex Complex::operator +(Complex secondComplex)
{
	Complex result;
	result.integer = this->integer + secondComplex.integer;
	result.imaginary = this->imaginary + secondComplex.imaginary;
	return result;
}
Complex Complex::operator -(Complex secondComplex)
{
	Complex result;
	result.integer = this->integer - secondComplex.integer;
	result.imaginary = this->imaginary - secondComplex.imaginary;
	return result;
}
std::istream& operator >>(std:: istream& input , Complex & cin)
{
	cout << "integer : ";
	input >> cin.integer;
	cout << "imaginary : ";
	input >> cin .imaginary;
	return input;
}
std::ostream& operator <<(std:: ostream& out , Complex const& print)
{
	out << print.integer << " + " <<print.imaginary<<"i";
	return out;
}
bool Complex::operator ==(Complex const& test)
{
	if(this->imaginary == test.imaginary && this->integer == test.integer)
		return true;
	else
		return false;
}
void Complex::operator =(Complex const& fix)
{
	this->imaginary = fix.imaginary;
	this->integer = fix.integer;
}







