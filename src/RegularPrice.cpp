/*
  RegularPrice.cpp
  Definition file for RegularPrice class
*/

#include "RegularPrice.hpp"
#include "Movie.hpp"

// movie price code
int RegularPrice::getPriceCode() const {
  return Movie::REGULAR;
}

// calculate amount for a rental
double RegularPrice::getCharge(int days) const {
  double thisAmount = 2;

  if (days > 2)
    thisAmount += (days - 2) * 1.5;

  return thisAmount;
}
