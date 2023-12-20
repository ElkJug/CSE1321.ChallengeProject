//Celsius/Fahrenheit/Kelvin
class Temperature{
    private:
        double kelvin;
    public:
        Temperature(){ kelvin = 0;}
        void set_kelvin(double kelvin){
            this->kelvin = kelvin;
        }
        void set_celsius(double celsius){
            this->kelvin = celsius + 273.15;
        }
        void set_fahrenheit(double fahrenheit){
            this->kelvin = (fahrenheit + 459.67) * (double(5)/9);
        }

        double get_kelvin(){
            return this->kelvin;
        }
        double get_celsius(){
            return this->kelvin - 273.15;
        }
        double get_fahrenheit(){
            return (this->kelvin * 9/5) - 459.67;
        }
};