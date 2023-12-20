//lb/kg
class Weight{
    private:
        double kg;
        double lbkg_ratio = 0.45359237;
    public:
        Weight(){ kg = 0;}
        void set_kg(double kilogram){
            this->kg = kilogram;
        }
        void set_lb(double pound){
            this->kg = pound * lbkg_ratio;
        }
        double get_kg(){
            return this->kg;
        }
        double get_lb(){
            return this->kg / lbkg_ratio;
        }
};