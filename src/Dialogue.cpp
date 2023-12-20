#include <iostream>
#include <string>

class Dialogue_utility{
    public:
    static int spawn_int(string message = "") {
        int i;
        cout << message;
        cin >> i;
        if(cin.fail()){ 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw runtime_error("Invalid input - input not a valid integer");}
        return i;
    }

    static double spawn_double(string message = "") {
        double d;
        cout << message;
        cin >> d;
        if(cin.fail()){ 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw runtime_error("Invalid input - input not a valid double");}
        return d;
    }

    static string spawn_string(string message = "") {
        string s;
        cout << message;
        cin >> s;
        if(cin.fail()){ 
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        throw runtime_error("Invalid input - input not a valid string");}
        return s;
    }
};