#include "Temperature.h"

//Celsius
double Temperature::get_kelvin(){
    return this->kelvin;
    }
void Temperature::set_kelvin(double kelvin){
    this->kelvin = kelvin;
    }

//Fahrenheit
double Temperature::get_celsius(){
    return this->kelvin - 273.15;
    }
void Temperature::set_celsius(double celsius){
    this->kelvin = celsius + 273.15;
    }

//Kelvin
double Temperature::get_fahrenheit(){
    return (this->kelvin * 9/5) - 459.67;
    }
void Temperature::set_fahrenheit(double fahrenheit){
    this->kelvin = (fahrenheit + 459.67) * (double(5)/9);
    }