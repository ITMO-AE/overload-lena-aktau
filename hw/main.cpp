#include <iostream>
#include "rational.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Rational r(1,4);
    cout << r.Numerator() << '/' << r.Denominator()<<"\n";
    Rational r1(2,4);
    cout << r1.Numerator() << '/' << r1.Denominator()<<"\n";
    Rational r2;
    cout << r2.Numerator() << '/' << r2.Denominator()<<"\n";
    Rational a = r+r1;
    cout<<"r+r1 = "<<a.Numerator()<<"/"<<a.Denominator()<<"\n";

    Rational a1 = r-r1;
    cout<<"r+r1 = "<<a1.Numerator()<<"/"<<a1.Denominator()<<"\n";

    Rational r3(3,4);
    Rational r4(3,7);
    if ( r3 == r4 )
        cout << "equal"<< "\n";
    else
        cout << "not equal"<< "\n";
    Rational r5(1,9);
    cout<<"r5 = "<<r5;
    cout<<"r2-r1 = "<<r2-r1;
    return 0;


}
