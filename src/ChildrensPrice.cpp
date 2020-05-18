/*
  ChildrensPrice.cpp
  Definition file for ChildrensPrice class
*/

#include "ChildrensPrice.hpp"
#include "Movie.hpp"

// movie price code
int ChildrensPrice::getPriceCode() const {
  return Movie::CHILDRENS;
}

// calculate amount for a rental
double ChildrensPrice::getCharge(int days) const {
  double thisAmount = 1.5;

  if (days > 3)
    thisAmount += (days - 3) * 1.5;

  return thisAmount;
}
