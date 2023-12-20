#include <limits>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;


class Conversion{
    public:
    void run(){
        while (true)
        {
            try
            {
                //normal loop, if not compling goto menu/exit loop
                cout << "\n\n"
                     << "---Conversion Utility---------------------\n"
                     << "1) Temperature | Celsius/Fahrenheit/Kelvin\n"
                     << "2) Weight      | lb/kg\n"
                     << "3) Currency    | USD/EUR\n"
                ;

                int selected = Dialogue_utility::spawn_int("Enter selection:");
                switch (selected)
                {
                case 1:
                    // temperature conversion
                    run_temperature_conversion();
                    break;
                case 2:
                    // weight conversion
                    run_weight_conversion();
                    break;
                case 3:
                    // currency conversion
                    run_currency_conversion();
                    break;
                default:
                    throw runtime_error("Invalid - Selection do not exit");
                }
            }
            catch(const exception& e) {
                cout << e.what() << '\n';
                cout << "\nPress ANY key to menu\n"
                     << "Q to quit\n: ";
                char quit = ' ';
                cin >> quit;
                if(tolower(quit) == 'q'){
                    cout << "exiting...\n";
                    return ;
                }
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        }
    }

    void run_temperature_conversion(){
        // menu logic for temperature conversion
        cout << "\n"
             << "1) Celsius\n"
             << "2) Kelvin\n"
             << "3) Fahrenheit\n"
        ;

        double val_in = Dialogue_utility::spawn_double("Amount:  ");
        int unit_in = Dialogue_utility::spawn_int("From:    ");
        int unit_out = Dialogue_utility::spawn_int("To:      ");

        Temperature temperaturecalculator;

        switch (unit_in) {
        case 1:
            temperaturecalculator.set_celsius(val_in);
            break;
        case 2:
            temperaturecalculator.set_kelvin(val_in);
            break;
        case 3:
            temperaturecalculator.set_fahrenheit(val_in);
            break;
        default:
            throw runtime_error("Invalid - Selection do not exit");
        }

        double result = 0;
        switch (unit_out) {
        case 1:
            result = temperaturecalculator.get_celsius();
            break;
        case 2:
            result = temperaturecalculator.get_kelvin();
            break;
        case 3:
            result = temperaturecalculator.get_fahrenheit();
            break;
        default:
            throw runtime_error("Invalid - Selection do not exit");
        }

        cout << "Result:  " << result << "\n";
    }
    void run_weight_conversion(){
        // menu logic for weight conversion
        cout << "\n"
             << "1) Kilogram\n"
             << "2) Pound\n"
        ;

        double val_in = Dialogue_utility::spawn_double("Amount:  ");
        int unit_in = Dialogue_utility::spawn_int("From:    ");
        int unit_out = Dialogue_utility::spawn_int("To:      ");

        Weight weightcalculator;

        switch (unit_in) {
        case 1:
            weightcalculator.set_kg(val_in);
            break;
        case 2:
            weightcalculator.set_lb(val_in);
            break;
        default:
            throw runtime_error("Invalid - Selection do not exit");
        }

        double result = 0;
        switch (unit_out) {
        case 1:
            result = weightcalculator.get_kg();
            break;
        case 2:
            result = weightcalculator.get_lb();
            break;
        default:
            throw runtime_error("Invalid - Selection do not exit");
        }

        cout << "Result:  " << result << "\n";
    }
    void run_currency_conversion(){
        // menu logic for currency conversion
        cout << "\n"
             << "1) USD\n"
             << "2) EUR\n"
        ;

        double val_in = Dialogue_utility::spawn_double("Amount:  ");
        int unit_in = Dialogue_utility::spawn_int("From:    ");
        int unit_out = Dialogue_utility::spawn_int("To:      ");

        Currency currency_calculator;

        switch (unit_in) {
        case 1:
            currency_calculator.set_usd(val_in);
            break;
        case 2:
            currency_calculator.set_eur(val_in);
            break;
        default:
            throw runtime_error("Invalid - Selection do not exit");
        }

        double result = 0;
        switch (unit_out) {
        case 1:
            result = currency_calculator.get_usd();
            break;
        case 2:
            result = currency_calculator.get_eur();
            break;
        default:
            throw runtime_error("Invalid - Selection do not exit");
        }

        cout << "Result:  " << result << "\n";
    }
};