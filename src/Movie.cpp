/*
  Movie.cpp

  Definition file for Movie class
*/

#include "Movie.hpp"
#include "Price.hpp"
#include "ChildrensPrice.hpp"
#include "NewReleasePrice.hpp"
#include "RegularPrice.hpp"

// constructor
Movie::Movie(const std::string& title, int price_code) {
  this->title = title;

  price = NULL;

  setPriceCode(price_code);
}

// copy constructor
Movie::Movie(const Movie & movie) {
  this->title = movie.title;

  price = NULL;

  this->setPriceCode(movie.getPriceCode());
}

// destructor
Movie::~Movie() {
  delete price;
}

// swap
void Movie::swap(Movie & movie) {
  std::swap(title, movie.title);

  std::swap(price, movie.price);
}

// Movie's assignment operator
Movie & Movie::operator=(Movie rhs) {
    swap(rhs);

    return *this;
}

// movie price code
int Movie::getPriceCode() const {

   return price->getPriceCode();
}

// set movie price code
void Movie::setPriceCode(int new_price_code) {
    delete price;

    if (new_price_code == REGULAR){
      price = new RegularPrice;
    } else if (new_price_code == NEW_RELEASE) {
      price = new NewReleasePrice;
    } else if (new_price_code == CHILDRENS) {
      price = new ChildrensPrice;
    }
}

// movie title
const std::string& Movie::getTitle() const {

    return title;
}

// calculate amount for a rental
double Movie::getCharge(int days) const {

  return price->getCharge(days);
}

int Movie::getFrequentRenterPoints(int days) const {

  return price->getFrequentRenterPoints(days, getPriceCode());
}
