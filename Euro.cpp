

#include "Euro.h"
#include <iostream>
using namespace std;

Euro::Euro(int amount) : Currency(0.845989, amount) {

}

void Euro::show() {
    cout << "EUR" << "\t" << exchangeRate * amount << "\n";
}



