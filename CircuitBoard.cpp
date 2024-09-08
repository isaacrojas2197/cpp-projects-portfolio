#include<iostream>
#include<iomanip>
#include "CircuitBoard.h"
using namespace::std;

CircuitBoard::CircuitBoard(double aCost, double aPercentageOfProfit) : cost(aCost), percentageOfProfit(aPercentageOfProfit){
    cout << "Welcome to the constructor" << endl;
}
CircuitBoard::~CircuitBoard(){
    cout << "\nThe destructor is now running!" << endl;
}
CircuitBoard& CircuitBoard::setCost(double aCost){
    if(aCost < 0) throw NegativeCost(); // Modification
    cost = aCost;
    return *this;
}
CircuitBoard& CircuitBoard::setPercentageOfProfit(double aPercentageOfProfit){
    if(aPercentageOfProfit < 0) throw NegativePercent(); // Modification
    percentageOfProfit = aPercentageOfProfit;
    return *this;
}
double CircuitBoard::getCost() const{
    return cost;
}
double CircuitBoard::getPercentOfProfit() const{
    return percentageOfProfit / 100.0;
}
double CircuitBoard::getTotalCost() const{
    return cost + cost * getPercentOfProfit();
}
void CircuitBoard::display() const{
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Price of Circuit Board: $" << cost << endl;
    cout << "Profit percentage: $" << cost * getPercentOfProfit() << endl;
    cout << "Total cost: $ " << getTotalCost() << endl;
}

// Inserction Modification
std::ostream& operator<<(std::ostream& os, const CircuitBoard& circuitBoard) {
    os << "Price of Circuit Board: $" << circuitBoard.cost << endl;
    os << "Profit percentage: $" << circuitBoard.cost * circuitBoard.getPercentOfProfit() << endl;
    os << "Total cost: $ " << circuitBoard.getTotalCost() << endl;
    return os;
}
// Extraction Modification
std::istream& operator>>(std::istream& is, CircuitBoard& circuitBoard) {
    double tmpCost, tmpPercentageOfProfit;
    cout << "Enter the price of the Circuit Board: $";
    is >> tmpCost;
    cout << "Enter the profit percentage (Ex. 35): ";
    is >> tmpPercentageOfProfit;
    circuitBoard.setCost(tmpCost).setPercentageOfProfit(tmpPercentageOfProfit);
    return is;
}

