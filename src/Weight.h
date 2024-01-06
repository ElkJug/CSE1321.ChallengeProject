// Weight.h - Header file for the Weight class

#ifndef WEIGHT_H
#define WEIGHT_H

class Weight{
    private:
        double kg;
        const double lbkg_ratio;
    public:
        //constructor
        Weight(): kg(0), lbkg_ratio(0.45359237){}

        //setter methods
        void set_kg(double kilogram);
        void set_lb(double pound);

        //getter methods
        double get_kg();
        double get_lb();
};
#endif //WEIGHT_H