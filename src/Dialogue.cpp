#include <iostream>
#include <string>
#include <limits>

// A utility class for handlign user inputs with error handling

class Dialogue{
public:

    // return a valid int from user input
    static int spawn_int(std::string prompt = "") {
        int i;
        std::cout << prompt;
        std::cin >> i;
        if(std::cin.fail()){ 
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw std::runtime_error("Invalid input - input not a valid integer");}
        return i;
    }

    // return a valid double from user input
    static double spawn_double(std::string prompt = "") {
        double d;
        std::cout << prompt;
        std::cin >> d;
        if(std::cin.fail()){ 
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            throw std::runtime_error("Invalid input - input not a valid double");}
        return d;
    }

    // return a valid string from user input
    static std::string spawn_string(std::string prompt = "") {
        std::string s;
        std::cout << prompt;
        std::cin >> s;
        if(std::cin.fail()){ 
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw std::runtime_error("Invalid input - input not a valid string");}
        return s;
    }
};