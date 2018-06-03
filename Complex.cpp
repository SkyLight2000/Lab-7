#include "stdafx.h"
#include "Complex.h"

Complex::Complex(double r, double i) {
	re = r;
	im = i;
}

Complex Complex::operator + (const Complex &c) {
	return Complex(re + c.re, im + c.im);
}
Complex Complex::operator - (const Complex &c) {
	return Complex(re - c.re, im - c.im);
}
Complex Complex::operator * (const Complex &c) {
	return Complex(re * c.re - im * c.im, re * c.im + im * c.re);
}

ostream& operator<< (ostream &out, const Complex &c) {
	out << "(" << c.re << ", " << c.im << ")";
	return out;
}
