/*
  Movie.hpp

  Include file for Movie class
*/

#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Price;

class Movie {

public:
    static const int REGULAR      = 0;
    static const int NEW_RELEASE  = 1;
    static const int CHILDRENS    = 2;

private:
    std::string title;
    Price * price;

public:
    // constructor
    Movie(const std::string& title, int price_code);

    // copy constructor
    Movie(const Movie & movie);

    // destructor
    ~Movie();

    // swap
    void swap(Movie & movie);

    // Movie's assignment operator
    Movie & operator=(Movie rhs);

    // movie price code
    int getPriceCode() const;

    // set movie price code
    void setPriceCode(int new_price_code);

    // movie title
    const std::string& getTitle() const;

    // calculate amount for a rental
    double getCharge(int days) const;

    // retrieve the frequentrenterpoints
    int getFrequentRenterPoints(int days) const;
};

#endif
