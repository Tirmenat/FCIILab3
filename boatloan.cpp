#include <iostream> //include io stuff
#include <iomanip>
#include "boatloan.h" //include headers
#include "bankaccount.h"

//default constructor
BoatLoan::BoatLoan(){
  maxLootStorage=10;
  numOfCannons=10;
}

//nondefault constructor
BoatLoan::BoatLoan(int storage, int cannons){
  maxLootStorage=storage;
  numOfCannons=cannons;
}

//return max loot storage
int BoatLoan::getMaxLootStorage(){
  return (maxLootStorage);
}

//return number of cannons
int BoatLoan::getNumOfCannons(){
  return (numOfCannons);
}
