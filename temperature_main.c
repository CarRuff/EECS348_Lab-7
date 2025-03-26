#include <iostream>
#include "temperature.h"

int main()
{
    float input, temp_converted, temp_in_celsius;
    int scale, target;
    
    std::cout << "Enter the temperature value: ";
    std::cin >> input;
    
    std::cout << "Choose the input scale: 1 for Celsius, 2 for Fahrenheit, 3 for Kelvin: ";
    std::cin >> scale;
    
    std::cout << "Choose the target scale: 1 for Celsius, 2 for Fahrenheit, 3 for Kelvin: ";
    std::cin >> target;
    
    // Convert to Celsius first
    switch (scale) {
        case 1:
            temp_in_celsius = input;
            break;
        case 2:
            temp_in_celsius = fahrenheit_to_celsius(input);
            break;
        case 3:
            temp_in_celsius = kelvin_to_celsius(input);
            break;
        default:
            std::cout << "Invalid input scale.\n";
            return 1;
    }
    
    // Perform final conversion
    switch (target) {
        case 1:
            temp_converted = temp_in_celsius;
            std::cout << "Converted Temperature: " << temp_converted << " Celsius\n";
            break;
        case 2:
            temp_converted = celsius_to_fahrenheit(temp_in_celsius);
            std::cout << "Converted Temperature: " << temp_converted << " Fahrenheit\n";
            break;
        case 3:
            temp_converted = celsius_to_kelvin(temp_in_celsius);
            std::cout << "Converted Temperature: " << temp_converted << " Kelvin\n";
            break;
        default:
            std::cout << "Invalid target scale.\n";
            return 1;
    }
    
    // Categorize and advise based on Celsius
    categorize_temperature(temp_in_celsius);

    return 0;
}
