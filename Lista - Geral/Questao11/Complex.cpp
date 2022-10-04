#include <iostream>

using namespace std;

#include "Complex.h"

Complex::Complex( double realPart, double imaginaryPart ) : real( realPart ), imaginary( imaginaryPart ) {}

Complex Complex::operator + ( const Complex &operand2 ) const {

    return Complex( real + operand2.real, imaginary + operand2.imaginary );

}

Complex Complex::operator - ( const Complex &operand2 ) const {

    return Complex( real - operand2.real, imaginary - operand2.imaginary );

}

Complex Complex::operator * ( const Complex &operand2 ) const {

    return Complex( real * operand2.real, imaginary * operand2.imaginary );

}

bool Complex::operator == ( const Complex &operand2 ) const {

    if ( real == operand2.real && imaginary == operand2.imaginary ) { return true; }
    else { return false; }

}

bool Complex::operator != ( const Complex &operand2 ) const {

    if ( real != operand2.real || imaginary != operand2.imaginary ) { return true; }
    else { return false; }

}

void Complex::print() const {

    cout << "(" << real << "," << imaginary << ")" << endl;

}