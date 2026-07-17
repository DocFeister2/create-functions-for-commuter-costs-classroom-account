#include <iostream>
using namespace std;

const double DOLLARS_PER_GALLON = 4.49;     // cost of gas per gallon
const double MILES_PER_COMMUTE = 20.5;    // miles in one round-trip commute
const double MILES_PER_GALLON = 36;       // car fuel efficiency

double myCommutes;
double myCost;

// Converts gas dollars into number of commutes
double toCommutes(double gasDollars) {
  double gasGallons;
  double gasMiles;
  double numCommutes;

  gasGallons = gasDollars / DOLLARS_PER_GALLON;
  gasMiles = gasGallons * MILES_PER_GALLON;

  numCommutes = gasMiles / MILES_PER_COMMUTE;

  return numCommutes;
}

// Converts a number of commutes into the dollar cost of gas for those commutes.
double toDollars(double commutes) {
  double gasMiles;    // total miles driven across all those commutes
  double gasGallons;  // gallons of gas those miles will burn
  double totalCost;   // dollars needed to buy that gas

  gasMiles = commutes * MILES_PER_COMMUTE;      // miles driven in total
  gasGallons = gasMiles / MILES_PER_GALLON;     // gallons burned over those miles
  totalCost = gasGallons * DOLLARS_PER_GALLON;  // dollars to buy those gallons

  return totalCost;
}

int main() {

  cout << "$20 will buy you: " << toCommutes(20) << " commutes." << endl;
  cout << "$100.50 will buy you: " << toCommutes(100.50) << " commutes." << endl;
  cout << "$500 will buy you: " << toCommutes(500) << " commutes." << endl;
  cout << "$8000 will buy you: " << toCommutes(8000) << " commutes." << endl;

  cout << "Enter the number of commutes you'd like to do:" << endl;
  cin >> myCommutes;

  myCost = toDollars(myCommutes);

  cout << "Great idea! Let's drive! ";
  cout << myCommutes << " commutes will cost you $" << myCost << endl;

  cout << "All done!" << endl;
}
