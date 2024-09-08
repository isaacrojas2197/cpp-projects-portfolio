#include<iostream>
#include "CircuitBoard.h"
using namespace std;

int main(){
    CircuitBoard circuitBoard;
    char again;
    do {
        try {
            cin >> circuitBoard;
            cout << circuitBoard;
        } catch (const NegativeCost& e) {
            cout << e.what() << endl;
        } catch (const NegativePercent& e) {
            cout << e.what() << endl;
        }
            cout << "Do you want to calculate another circuit board price (Y/N)?: ";
        cin >> again;
    } while (again == 'Y' || again == 'y');
    return 0;
}// end main

