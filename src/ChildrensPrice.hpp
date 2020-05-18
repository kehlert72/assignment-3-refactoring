/*
  ChildrensPrice.hpp
  Include file for Price class
*/

#ifndef CHILDRENSPRICE_H
#define CHILDRENSPRICE_H

#include "Price.hpp"

class ChildrensPrice : public Price {

public:

  // movie price code
  int getPriceCode() const;

  // calculate amount for a rental
  double getCharge(int days) const;

};

#endif
