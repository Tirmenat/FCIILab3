#ifndef BOATLOAN_H //preprocessing wrapper
#define BOATLOAN_H

#include <iostream> //iclude io
#include <iomanip>
#include "bankaccount.h" //include header

class BoatLoan : public BankAccount { //make class from bankaccount base class
 public: //public stuffs
  BoatLoan(); //default constructor
  BoatLoan(int, int); //nondefault constructor
  int getMaxLootStorage(); //returns max storage
  int getNumOfCannons(); //returns number of cannons

 private: //private data
  int maxLootStorage;
  int numOfCannons;

};
