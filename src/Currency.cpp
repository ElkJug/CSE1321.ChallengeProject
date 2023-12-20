//USD/EUR
class Currency{
    private:
        double usd;
        double exchange_rate = 1.0885;
    public:
        Currency(){ usd = 0;}
        void set_usd(double usd){ this->usd = usd;}
        void set_eur(double eur){ this->usd = eur * exchange_rate;}
        double get_usd(){ return this->usd;}
        double get_eur(){ return this->usd / exchange_rate;}
};