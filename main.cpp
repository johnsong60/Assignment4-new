// Author: johnathan song
// GitHub:
// October 31, 2020
// csis 123a

#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Currency.h"
#include "Euro.h"
#include "JPY.h"
#include "KRW.h"
#include "Peso.h"

/*
 * 
 */
int main(int argc, char** argv) {

    char selection;
    int amount;
    vector<Currency *> v;
    do {
        cout << "Convert from USD to\n";
                cout << "A. Euro\n"
                << "B. Mexican Peso\n"
                << "C. Japanese Yen\n"
                << "D. Korean Won\n"
                << "E. Display All\n"
                << "Q. Quit\n";
        cin >> selection;

        if (selection == 'A' || selection == 'B'
                || selection == 'C' || selection == 'D') {
            cout << "Enter amount of money in USD: ";
            cin >> amount;
            switch (selection) {
                case 'A':
                    v.push_back(new Euro(amount));
                    break;
                case 'B':
                    v.push_back(new Peso(amount));
                    break;
                case 'C':
                    v.push_back(new JPY(amount));
                    break;
                case 'D':
                    v.push_back(new KRW(amount));
                    break;    
            }
        } else if (selection == 'E') {
            cout << "\n";
            for (const auto &element : v) {
                element->show();
            }
        }

        cout << "\n";
    } while (selection != 'Q');


    return 0;
}

