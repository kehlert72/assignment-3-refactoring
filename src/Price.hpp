/*
  Price.hpp
*/

#ifndef PRICE_H
#define PRICE_H

#include "Movie.hpp"

class Price {

public:
  // destructor
  virtual ~Price() {
  }

  // get the price code
  virtual int getPriceCode() const = 0;

  // calculate amount for a rental
  virtual double getCharge(int days) const = 0;

  int getFrequentRenterPoints(int days, int price_code) const {
    // add frequent renter points
    int frequentRenterPoints = 1;

    // add bonus for a two day new release rental
    if ((price_code == Movie::NEW_RELEASE) && days > 1) {
      frequentRenterPoints++;
    }

    return frequentRenterPoints;
  }
};

#endif
