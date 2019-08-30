#include "COMPLEX.h"
#include <cmath>
#include <iostream>
  using namespace std;

  Complex :: Complex(): real(0), imag(0)
  {}
  Complex :: Complex(int real, int imag): real(real), imag(imag)
  {}
  void Complex :: setreal(int real){
     this->real=real;
}

void Complex :: setimag(int imag){
    this->imag=imag;
}

int Complex :: getreal() const{
 return this->real;
 }

 int Complex :: getimag() const{
  return this->imag;
}

void Complex :: type(){
 cout<<"real ="; cin>>this->real;
 cout<<"imganery ="; cin>>this->imag;
}

void Complex :: show() const{
    if(imag>=0){
 cout<<real<<"+"<<imag<<"i"<<endl;
    }else{
    cout<<real<<""<<imag<<"i"<<endl;
    }
  cout<<"_________________________________________________________"<<endl;
}
void Complex :: division(const Complex &C) const
{
    int n, u, m, i, p, s, x, y;
    p = C.real;
    s = (-C.imag);
    n = this->real*C.real;
    u = this->real*(-C.imag);
    m = this->imag*C.real;
    i = this->imag*(-C.imag);
    if (imag*(-C.imag)){
        i = i*(-1);
    }
    x = p*p;
    y = s*p;
    if (s*p){
        y = y*(-1);
    }
    if ((u+m)<=0){
    cout<<(n+i)<<"/"<<(x+y)<<""<<(u+m)<<"/"<<(x+y)<<"i"<<endl;
    }else{
    cout<<(n+i)<<"/"<<(x+y)<<"+"<<(u+m)<<"/"<<(x+y)<<"i"<<endl;
    }
    cout<<"___________________________________________________________"<<endl;
}


Complex Complex :: sum(const Complex &C) const
{
    Complex result;
    result.real = this->real+C.real;
    result.imag = this->imag+C.imag;
    return result;
}

Complex Complex :: subtract(const Complex &C) const
{
    Complex result;
    result.real = this->real-C.real;
    result.imag = this->imag-C.imag;
    return result;
}

Complex Complex :: multiply(const Complex &C) const
{
    Complex result;
    int n, u;
    int m, i;
    n = this->real*C.real;
    u = this->real*C.imag;
    m = this->imag*C.real;
    i = this->imag*C.imag;
    if (imag*C.imag){
        i = i*(-1);
    }
    result.real = n+i;
    result.imag = u+m;
    return result;
}

