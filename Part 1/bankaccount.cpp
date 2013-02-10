#include <iostream> //include io
#include "bankaccount.h" //include header
using namespace std;

BankAccount::BankAccount(){ //default constructor
  interestRateSavings=;
  interestRateLoan=;
  monthlyPayment=;
  principal=;
}

//nondefault constructor
BankAccount::BankAccount(float saverate, float loanrate, float monthpay, float principal){
  interestRateSavings=saverate;
  interestRateLoan=loanrate;
  monthlyPayment=monthpay;
  principal=principal;
}

//return interest rate of savings
float BankAccount::getInterestRateSavings(){
  return (interestRateSavings);
}

//return interest rate of loan
float BankAccount::getInterestRateLoan(){
  return (interestRateLoan);
}

//return the monthly payment
float BankAccount::getMonthlyPayment(){
  return (monthlyPayment);
}

//return the principal
float BankAccount::getPrincipal(){
  return (principal);
}

