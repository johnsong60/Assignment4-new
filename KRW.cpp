

#include "KRW.h"
#include <iostream>
using namespace std;

KRW::KRW(int amount) : Currency(1143.58, amount) {

}

void KRW::show() {
    cout << "KRW" << "\t" << exchangeRate * amount << "\n";
}

