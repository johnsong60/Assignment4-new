

#include "JPY.h"
#include <iostream>
using namespace std;

JPY::JPY(int amount) : Currency(105.639, amount) {

}

void JPY::show() {
    cout << "JPY" << "\t" << exchangeRate * amount << "\n";
}


