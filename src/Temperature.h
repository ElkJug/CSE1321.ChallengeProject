// Temperature.h - Header file for the Temperature class

#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature{
    private:
        double kelvin;
    public:
        //constructor
        Temperature(): kelvin(0) {}

        //setter methods
        void set_kelvin(double kelvin);
        void set_celsius(double celsius);
        void set_fahrenheit(double fahrenheit);

        //getter methods
        double get_kelvin();
        double get_celsius();
        double get_fahrenheit();
};
#endif //TEMPERATURE_H