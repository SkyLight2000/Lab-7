#pragma once

class Complex {
private:
	double re, im;
public:
	Complex() {};
	Complex(double r, double i);
	~Complex() {};
	Complex operator + (const Complex &c);
	Complex operator - (const Complex &c);
	Complex operator * (const Complex &c);
	friend ostream & operator<< (ostream &, const Complex &);
};
