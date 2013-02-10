#ifndef BANKACCOUNT_H //preprocessing wrapper
#define BANKACCOUNT_H

#include <iostream> //include io stuffs
#include <iomanip>
using namespace std;

class BankAccount { //define the class
 public: //public stoof
  BankAccount(); //default constructor
  BankAccount(float, float, float, float); //nondefault constructor
  float getInterestRateSavings(); //get interest rate for savings
  float getInterestRateLoan(); //get interest rate for loans
  float getMonthlyPayment(); //get monthly payment
  float getPrincipal(); //get principal

 private: //private data members
  float interestRateSavings;
  float interestRateLoan;
  float monthlyPayment;
  float principal;
  
};



#endif BANKACCOUNT_H
