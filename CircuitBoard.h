#ifndef CIRCUIT_BOARD
#define CIRCUIT_BOARD

#include <iostream> // Modification

class NegativeCost : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Cost cannot be negative.";
    }
};

class NegativePercent : public std::exception {
public:
    const char* what() const noexcept override {
        return "Error: Profit percentage cannot be negative.";
    }
};

class CircuitBoard {
private:
    double cost;
    double percentageOfProfit;
public:
    CircuitBoard(double aCost = 0.0, double aPercentageOfProfit = 0.0);
    ~CircuitBoard();
    CircuitBoard& setCost(double aCost); // Modification
    CircuitBoard& setPercentageOfProfit(double aPercentageOfProfit); // Modification
    double getCost() const;
    double getPercentOfProfit() const;
    double getTotalCost() const;
    void display() const;

    // Insertion Modification
    friend std::ostream& operator<<(std::ostream& os, const CircuitBoard& circuitBoard);
    // Extraction Modification
    friend std::istream& operator>>(std::istream& is, CircuitBoard& circuitBoard);
};

#endif

