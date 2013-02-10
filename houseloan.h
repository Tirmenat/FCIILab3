#ifndef HOUSELOAN_H //preprocessing wrapper
#define HOUSELOAN_H

#include <iostream> //include io stuffs
#include <iomanip>
#include "bankaccount.h" //include header
using namespace std;

class HouseLoan : public BankAccount { //class based on bankaccount
 public: //public stuffs
  HouseLoan(); //default constructor
  HouseLoan(int, int); //nondefault constructor
  int getNumJacuzzis(); //get num jacuzzis
  int getNumBedrooms(); //get num bedrooms

 private: //private data
  int numJacuzzis;
  int numBedrooms;


};



#endif
