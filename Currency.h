

#ifndef CURRENCY_H
#define CURRENCY_H

class Currency {
public:

    Currency(double exchangeRate, int amount);
    virtual void show() = 0;
protected:
    int amount;
    double exchangeRate;
};

#endif /* CURRENCY_H */

