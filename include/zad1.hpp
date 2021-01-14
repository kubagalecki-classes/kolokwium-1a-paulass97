#include "catch.hpp"

using namespace std;

class Tagliatelle : 
{
  public:
  Tagliatelle(): L(0.5), W(0.5), R(0.5) {}
  Tagliatelle(double l, double w, double r): L(l), W(w), R(r) {}
  
  double ileMaki(unsigned P) const
  {
    return P * L * W * (1. - R) * C;
  }

  private:
  double L;
  double W;
  double R;
  
  static const double C;
};

