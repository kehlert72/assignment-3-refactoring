/*
  RegularPrice.hpp
  Include file for Price class
*/

#ifndef REGULARPRICE_H
#define REGULARPRICE_H

#include "Price.hpp"

class RegularPrice : public Price {

public:

  // movie price code
  int getPriceCode() const;

  // calculate amount for a rental
  double getCharge(int days) const;

};

#endif
