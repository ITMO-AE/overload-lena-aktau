#include "rational.h"
#include <assert.h>

Rational::Rational():
    Numer(0),
    Denon(1)
{}
Rational::Rational(int numerator, int denominator)
{
    std::cout <<"denominator = "<<denominator<<"\n";
    assert(denominator != 0);
    if ( (Denon < 0 && Numer > 0) || (Denon < 0 && Numer < 0) )
    {
        Denon = -Denon;
        Numer = -Numer;
    }
    int gcd = gcd_3((numerator<0?-numerator:numerator),denominator);
    Numer = numerator/gcd;
    Denon = denominator/gcd;
}

int Rational::Numerator() const
{
    return Numer;
}
int Rational::Denominator() const
{
    return Denon;
}

bool Rational::operator == (Rational const &num_1)
{
    bool num;
    bool den;
    num = this->Numer == num_1.Numer ? true : false;
    den = this->Denon == num_1.Denon ? true : false;
    return ( (num == true) && (den == true) ) ? true : false;
}

int Rational::gcd_3(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

Rational operator+ (const Rational &num_0, const Rational &num_1)
{
    int Denon_common = num_0.Denon*num_1.Denon;
    int Numer_nommon = (num_0.Numer*num_1.Denon)+(num_1.Numer*num_0.Denon);
    return Rational(Numer_nommon,Denon_common);
}

Rational operator- (const Rational &num_0, const Rational &num_1)
{
    int Denon_common = num_0.Denon*num_1.Denon;
    int Numer_nommon = (num_0.Numer*num_1.Denon)-(num_1.Numer*num_0.Denon);
    return Rational(Numer_nommon,Denon_common);
}
std::ostream& operator <<(std::ostream& os, const Rational &Rat_num)
{
    os<<Rat_num.Numerator()<<"/"<<Rat_num.Denominator()<<"\n";
    return os;
}
