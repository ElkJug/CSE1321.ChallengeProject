# CSE1321 Conversion Program
[Project guideline](https://github.com/ElkJug/CSE1321.ChallengeProject/blob/e338ae9f996b05b1d6bf54feaf19b09acff378ad/Conversion%20program.pdf)
# code structure
    selection menu(do...while):
    temperature, distance, weight, or currency
    
    If invalid
        error message
        menu options / exit
        
        Switch
           .    temperature  ->  Celsius/Fahrenheit/Kelvin
           .    weight       ->  lb/kg
           .    currency     ->  USD/EUR
        
        display a formatted output -> original / converted value

    ask another
    . yes -> menu
    . no  -> thank+exit

## Requirements:
- [x] use class and object
- [x] use a default and a parametrized constructor
- [x] create public methods in the case
- [x] hexpose properties with `get` and `set`
- [x] use `this` keyword to seperate attributes and properties
- [x] manual testing for all use case
- [ ] (bonus) use references and pointers
- [ ] (bonus) automated test case
