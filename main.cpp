#include <iostream>
int main() {

    std::string busStop1 = "Tverskaya Street";
    std::string busStop2 = "Nikolskaya Street";
    std::string busStop3 = "Pushkinskaya Street";
    std::string busStop4 = "Bronnaya Street";
        int passengersGotOff;
        int passengersBoarded;
        int passengersInTheCabin = 0;
        int earnings = 0;
        int money;

    std::cout << "We arrive at the stop " << busStop1 << ". Passengers in the cabin: " << passengersInTheCabin <<"\n";
    std::cout << "How many passengers got off at the stop?";
      std::cin >> passengersGotOff;
    std::cout << "How many passengers got on at the stop?";
      std::cin >> passengersBoarded;
    std::cout << "Earnings: ";
      std::cin >> money;
    earnings += money;
    passengersInTheCabin = passengersInTheCabin - passengersGotOff + passengersBoarded;
    std::cout << "We depart from the stop " << busStop1 << ". Passengers in the cabin: " << passengersInTheCabin << "\n";
    std::cout << "-----------Let's go---------\n";
    std::cout << "We arrive at the stop " << busStop2 << ". Passengers in the cabin: " << passengersInTheCabin << "\n";
    std::cout << "How many passengers got off at the stop?";
      std::cin >> passengersGotOff;
    std::cout << "How many passengers got on at the stop?";
      std::cin >> passengersBoarded;
    std::cout << "Earnings: ";
      std::cin >> money;
    earnings += money;
    passengersInTheCabin = passengersInTheCabin - passengersGotOff + passengersBoarded;
    std::cout << "We depart from the stop " << busStop2 << ". Passengers in the cabin: " << passengersInTheCabin << "\n";
    std::cout << "-----------Let's go---------\n";
    std::cout << "We arrive at the stop " << busStop3 << ". Passengers in the cabin: " << passengersInTheCabin << "\n";
    std::cout << "How many passengers got off at the stop?";
      std::cin >> passengersGotOff;
    std::cout << "How many passengers got on at the stop?";
      std::cin >> passengersBoarded;
    std::cout << "Earnings: ";
      std::cin >> money;
    earnings += money;
    passengersInTheCabin = passengersInTheCabin - passengersGotOff + passengersBoarded;
    std::cout << "We depart from the stop " << busStop3 << ". Passengers in the cabin: " << passengersInTheCabin << "\n";
    std::cout << "-----------Let's go---------\n";
    std::cout << "We arrive at the stop " << busStop4 << ". Passengers in the cabin: " << passengersInTheCabin << "\n";
    std::cout << "How many passengers got off at the stop?";
      std::cin >> passengersGotOff;
    std::cout << "How many passengers got on at the stop?";
      std::cin >> passengersBoarded;
    std::cout << "Earnings: ";
      std::cin >> money;
    earnings += money;
    passengersInTheCabin = passengersInTheCabin - passengersGotOff + passengersBoarded;
    std::cout << "We depart from the stop " << busStop4 << ". Passengers in the cabin: " << passengersInTheCabin << "\n";

    std::cout << "=========================\n";

    std::cout << "Total earned: " << earnings << "\n";
    std::cout << "Driver's salary: " << earnings / 4 << "\n";
    std::cout << "Fuel costs: " << earnings / 5 << "\n";
    std::cout << "Taxes: " << earnings / 5 << "\n";
    std::cout << "Car repair costs: " << earnings / 5 << "\n";
    std::cout << "Total income: " << earnings - (earnings / 5) - (earnings / 5) - (earnings / 5) - (earnings / 4) << "\n";



}