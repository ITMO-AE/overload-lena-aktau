#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational {
private:
    int Numer;
    int Denon;
public:
  Rational();
  Rational(int numerator, int denominator);

  int Numerator() const;
  int Denominator() const;
  int gcd_3(int a, int b);
  bool operator == (Rational const &num_1);
  friend Rational operator + (const Rational &num_0, const Rational &num_1);
  friend Rational operator - (const Rational &num_0, const Rational &num_1);
  friend std::ostream& operator <<(std::ostream& os, const Rational &Rat_num);
};
#endif // RATIONAL_H
