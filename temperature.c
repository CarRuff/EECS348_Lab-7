#include "temperature.h"

// Categorization function
void categorize_temperature(float celsius) {
    std::cout << "\nWeather Category: ";
    if (celsius < 0) {
        std::cout << "Stay warm and avoid going outside if possible.\n";
    } else if (celsius >= 0 && celsius < 10) {
        std::cout << "Wear a jacket.\n";
    } else if (celsius >= 10 && celsius < 25) {
        std::cout << "Great weather. Enjoy your day!\n";
    } else if (celsius >= 25 && celsius < 35) {
        std::cout << "Stay hydrated and avoid direct sunlight.\n";
    } else {
        std::cout << "Stay indoors and keep cool.\n";
    }
}
