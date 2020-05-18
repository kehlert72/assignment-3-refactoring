/*
  Rental.cpp

  Definition file for Rental class.
*/

#include "Rental.hpp"
#include <vector>

// constructor
Rental::Rental(const Movie& movie, int days_rented)
    : movie(movie), days(days_rented)
{ }

// days rented
int Rental::getDaysRented() const {

    return days;
}

// movie rented
const Movie& Rental::getMovie() const {

    return movie;
}

int Rental::getFrequentRenterPoints() const {
    return getMovie().getFrequentRenterPoints(getDaysRented());

    // add frequent renter points
    /*int frequentRenterPoints = 1;

    // add bonus for a two day new release rental
    if ((getMovie().getPriceCode() == Movie::NEW_RELEASE) && getDaysRented() > 1) {
        frequentRenterPoints++;
    }

    return frequentRenterPoints;*/
}

// calculate the amount for a rental
double Rental::getCharge() const {

    return getMovie().getCharge(getDaysRented());

    /*double thisAmount = 0;

    //determine amounts for each line
    switch (getMovie().getPriceCode()) {
    case Movie::REGULAR:
	thisAmount += 2;
	if (getDaysRented() > 2)
	    thisAmount += (getDaysRented() - 2) * 1.5;
	break;
    case Movie::NEW_RELEASE:
	thisAmount += getDaysRented() * 3;
	break;
    case Movie::CHILDRENS:
	thisAmount += 1.5;
	if (getDaysRented() > 3)
	    thisAmount += (getDaysRented() - 3) * 1.5;
	break;

    }

    return thisAmount;*/
}
