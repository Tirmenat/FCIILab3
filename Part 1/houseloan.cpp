#include <iostream> //include io stuffs
#include <iomanip>
#include "bankaccount.h" //includ headers
#include "houseloan.h"

HouseLoan::HouseLoan(){ //default constructor
  numJacuzzis=5;
  numBedrooms=1;
}

HouseLoan::HouseLoan(int jacuzzis, int bedrooms){ //nondefault constructor
  numJacuzzis=jacuzzis;
  numBedrooms=bedrooms;
}

int getNumJacuzzis(){ //return num jacuzzis
  return (numJacuzzis);
}

int getNumBedrooms(){ //return num bedrooms
  return (numBedrooms);
}
