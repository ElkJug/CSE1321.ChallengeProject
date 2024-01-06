// Currency.h - Header file for the Currency class

#ifndef CURRENCY_H
#define CURRENCY_H


class Currency{
    private:
        double usd;
        const double exchange_rate;
    public:
        //constructor
        Currency(): usd(0), exchange_rate(1.0885){}

        //setter methods
        void set_usd(double usd);
        void set_eur(double eur);

        //getter methods
        double get_usd();
        double get_eur();
};


#endif //CURRENCY_H
