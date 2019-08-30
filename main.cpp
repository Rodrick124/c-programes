 #include "COMPLEX.h"
 #include <iostream>

using namespace std;

int main()
{
    Complex A, B, C, D, E;
    cout<<"Enter two complex numbers A and B;"<<endl;
    A.type();
    B.type();
    A.show();
    B.show();
    C = A.sum(B);
    D = A.subtract(B);
    E = A.multiply(B);
    A.division(B);
    C.show();
    D.show();
    E.show();
    return 0;
}
