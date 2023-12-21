// Dialogue.h - Header file for the Dialogue class

#ifndef DIALOGUE_H
#define DIALOGUE_H

#include <iostream>
#include <string>
#include <limits>

class Dialogue{
public:
    static int spawn_int(std::string prompt = "");
    static double spawn_double(std::string prompt = "");
    static std::string spawn_string(std::string prompt = "");
};
#endif //DIALOGUE_H