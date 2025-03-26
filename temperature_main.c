#include <iostream>
#include "temperature.h"

// Main Function
int main()
{   
    // Variable Setup
    float input, temp_converted, temp_in_celsius;
    int scale, target;

    // User input for Start temp
    std::cout << "Enter the temperature value: ";

    // Check For valid input
    if (!(std::cin >> input)) {
        std::cout << "Invalid temperature input.\n";
        return 1;
    }

    // User input for what scale the Start temp is
    std::cout << "Choose the input scale: 1 for Celsius, 2 for Fahrenheit, 3 for Kelvin: ";
    std::cin >> scale;

    // Check if scale is valid
    if (scale == 3 && input < 0) {
        std::cout << "Invalid input: Temperature in Kelvin cannot be negative.\n";
        return 1;
    }

    // User Input for what scale to convert Start temp to
    std::cout << "Choose the target scale: 1 for Celsius, 2 for Fahrenheit, 3 for Kelvin: ";
    std::cin >> target;


    // Check for valid target
    if (scale == target) {
        std::cout << "Invalid conversion: Input and target scales are the same.\n";
        return 1;
    }
    
    // Convert to Celsius first
    switch (scale) {

        // If the user inputed 1 for scale
        case 1:

            // Set temp to celsius
            temp_in_celsius = input;
            break;
        // If the user inputed 2 for scale
        case 2:

            // Set temp to celsius from fahrenheit. Using fahrenheit_to_celsius
            temp_in_celsius = fahrenheit_to_celsius(input);
            break;
        // If the user inputed 3 for scale
        case 3:
            
            // Set temp to celsius from kelvin. Using kelvin_to_celsius
            temp_in_celsius = kelvin_to_celsius(input);
            break;
        // Other Inputs
        default:
            // Tell the user its invalid
            std::cout << "Invalid input scale.\n";
            return 1;
    }
    
    // Perform final conversion
    switch (target) {
         // If the user inputed 1 for target
        case 1:

            // Print tempature out
            temp_converted = temp_in_celsius;
            std::cout << "Converted Temperature: " << temp_converted << " Celsius\n";
            break;
         // If the user inputed 2 for target
        case 2:

            // Convert into fahrenheit, then print
            temp_converted = celsius_to_fahrenheit(temp_in_celsius);
            std::cout << "Converted Temperature: " << temp_converted << " Fahrenheit\n";
            break;
         // If the user inputed 3 for target
        case 3:

            // Convert into kelvin, then print
            temp_converted = celsius_to_kelvin(temp_in_celsius);
            std::cout << "Converted Temperature: " << temp_converted << " Kelvin\n";
            break;
         // For other inputs
        default:
            // Tell the user its invalid
            std::cout << "Invalid target scale.\n";
            return 1;
    }
    
    // Send message based on temp
    categorize_temperature(temp_in_celsius);

    return 0;
}
