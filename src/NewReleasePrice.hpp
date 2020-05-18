/*
  NewReleasePrice.hpp
  Include file for Price class
*/

#ifndef NEWRELEASEPRICE_H
#define NEWRELEASEPRICE_H

#include <string>

#include "Price.hpp"

class NewReleasePrice : public Price {

public:

  // movie price code
  int getPriceCode() const;

  // set movie price code
  void setPriceCode(int new_price_code);

  // calculate amount for a rental
  double getCharge(int days) const;

};

#endif
