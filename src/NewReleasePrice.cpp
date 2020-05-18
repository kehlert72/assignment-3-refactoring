/*
  NewReleasePrice.cpp
  Definition file for NewReleasePrice class
*/

#include "NewReleasePrice.hpp"
#include "Movie.hpp"

// movie price code
int NewReleasePrice::getPriceCode() const {
  return Movie::NEW_RELEASE;
}

// calculate amount for a rental
double NewReleasePrice::getCharge(int days) const {
  return days * 3;
}
