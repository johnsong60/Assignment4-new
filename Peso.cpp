

#include "Peso.h"
#include <iostream>
using namespace std;

Peso::Peso(int amount) : Currency(21.1508, amount) {

}

void Peso::show() {
    cout << "MXN" << "\t" << exchangeRate * amount << "\n";
}


