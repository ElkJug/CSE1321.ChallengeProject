#include "Currency.h"

//usd
void Currency::set_usd(double usd){
    this->usd = usd;
}
double Currency::get_usd(){
    return this->usd;
}

//eur
void Currency::set_eur(double eur){
    this->usd = eur * exchange_rate;
}
double Currency::get_eur(){
    return this->usd / exchange_rate;
}
