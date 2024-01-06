#include "Weight.h"

//kg
double Weight::get_kg(){
    return this->kg;
}
void Weight::set_kg(double kilogram){
    this->kg = kilogram;
}

//lb
void Weight::set_lb(double pound){
    this->kg = pound * lbkg_ratio;
}
double Weight::get_lb(){
    return this->kg / lbkg_ratio;
}