#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
  using namespace std;

 class Complex{
 private:
     int real;
     int imag;
 public:
    Complex();
    Complex(int real, int imag);
    void setreal(int real);
    void setimag(int imag);
    int getreal() const;
    int getimag() const;
    void type();
    void show() const;
    Complex sum(const Complex &C) const;
    Complex subtract(const Complex &C) const;
    Complex multiply(const Complex &C) const;
    void division(const Complex &C) const;
};
#endif // COMPLEX_H
