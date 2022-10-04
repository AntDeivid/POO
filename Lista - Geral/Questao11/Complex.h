#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED
#include <iostream>

using namespace std;

class Complex {

    public:
        Complex( double = 0.0, double = 0.0);

        Complex operator + (const Complex &) const;
        Complex operator - (const Complex &) const;
        Complex operator * (const Complex &) const;
        bool operator == (const Complex &) const;
        bool operator != (const Complex &) const;

        void print() const;

    private:
        double real;
        double imaginary;

};


#endif