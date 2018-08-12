/*
 * Complex.h
 *
 *  Created on: May 15, 2018
 *      Author: armin
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>


class Complex
{
public :
	Complex(int integer = 0 , int imaginary = 0);
	Complex operator +(Complex secondComplex);
	Complex operator -(Complex secondComplex);
	friend std::istream& operator >>(std::istream& input, Complex& cin);
	friend std::ostream& operator <<(std::ostream& out, Complex const& print);
	bool operator ==(Complex const& test);
	void operator =(Complex const& fix);


private:
	int integer;
	int imaginary;
};



#endif /* COMPLEX_H_ */
